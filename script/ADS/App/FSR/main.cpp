#include "stb/stb_image.h"
#include "engine/shader.h"
#include "EASUPass.h"
#include "main.h"


int main(int, char **){
    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;
    const char* glsl_version = glfwCheckout();
    GLFWwindow* window = glfwCreateWindow(1920, 1080, "FSR Bench", nullptr, nullptr);
    if (window == nullptr)
        return 1;
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    //io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;

    ImGui::StyleColorsDark();
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);

    ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);

    /**
     * Image Loader
     */
    unsigned int raw_img_texture;
    glGenTextures(1, &raw_img_texture);
    glBindTexture(GL_TEXTURE_2D, raw_img_texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    int raw_img_width, raw_img_height, raw_img_nrChannels;
    unsigned char *data = stbi_load("/home/missdown/PycharmProjects/FSR/samples/downscaled/0.bmp", &raw_img_width, &raw_img_height, &raw_img_nrChannels, 0);
    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, raw_img_width, raw_img_height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        std::cerr << "Failed to load texture" << std::endl;
    }
    stbi_image_free(data);
    unsigned upSampling_img_texture;
    glGenTextures(1, &upSampling_img_texture);
    glBindTexture(GL_TEXTURE_2D, upSampling_img_texture);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, raw_img_width * 4, raw_img_height * 4, 0, GL_RGB, GL_UNSIGNED_BYTE,
                 std::vector<unsigned char>(raw_img_width * raw_img_height * 16 * 3, 0).data());
    glGenerateMipmap(GL_TEXTURE_2D);
    /**
     * Shader Loader
     */
    ADS_FSR::EASUPass easu_shader("/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/resources/shaders/FSR/ScreenQuad.vs", GL_VERTEX_SHADER);
    easu_shader.initShader(raw_img_texture, upSampling_img_texture, raw_img_width, raw_img_height, raw_img_width * 4, raw_img_height * 4);
//     glBindImageTexture
//    MAGI_ENGINE::Shader screenShader("/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/resources/shaders/FSR/ScreenQuad.vs",
//                                     "/home/missdown/IdeaProjects/MAGI_PROJECT/script/ADS/resources/shaders/FSR/ScreenQuad.fs");
//    screenShader.use();
//    MAGI_ENGINE::Shader
    /**
     * Flush Loop
     */
    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplGlfw_NewFrame();
        ImGui::NewFrame();
        {
            ImGuiIO& io = ImGui::GetIO();
            auto tex_id = reinterpret_cast<ImTextureID>(raw_img_texture);
            auto tex_w = (float)raw_img_width;
            auto tex_h = (float)raw_img_height;
            {
                ImGui::Text("raw image size: %.0fx%.0f", tex_w, tex_h);
                ImVec2 pos = ImGui::GetCursorScreenPos();
                ImVec2 uv_min = ImVec2(0.0f, 0.0f);                 // Top-left
                ImVec2 uv_max = ImVec2(1.0f, 1.0f);                 // Lower-right
                ImVec4 tint_col = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);   // No tint
                ImVec4 border_col = ImVec4(1.0f, 1.0f, 1.0f, 0.5f); // 50% opaque white
                ImGui::Image(tex_id, ImVec2(tex_w, tex_h), uv_min, uv_max, tint_col, border_col);
                if (ImGui::IsItemHovered())
                {
                    ImGui::BeginTooltip();
                    float region_sz = 32.0f;
                    float region_x = io.MousePos.x - pos.x - region_sz * 0.5f;
                    float region_y = io.MousePos.y - pos.y - region_sz * 0.5f;
                    float zoom = 8.0f;
                    if (region_x < 0.0f) { region_x = 0.0f; }
                    else if (region_x > tex_w - region_sz) { region_x = tex_w - region_sz; }
                    if (region_y < 0.0f) { region_y = 0.0f; }
                    else if (region_y > tex_h - region_sz) { region_y = tex_h - region_sz; }
                    ImGui::Text("Min: (%.2f, %.2f)", region_x, region_y);
                    ImGui::Text("Max: (%.2f, %.2f)", region_x + region_sz, region_y + region_sz);
                    ImVec2 uv0 = ImVec2((region_x) / tex_w, (region_y) / tex_h);
                    ImVec2 uv1 = ImVec2((region_x + region_sz) / tex_w, (region_y + region_sz) / tex_h);
                    ImGui::Image(tex_id, ImVec2(region_sz * zoom, region_sz * zoom), uv0, uv1, tint_col, border_col);
                    ImGui::EndTooltip();
                }
            }
        }
        {
            ImGuiIO& io = ImGui::GetIO();
            auto tex_id = reinterpret_cast<ImTextureID>(upSampling_img_texture);
            auto tex_w = (float)raw_img_width * 4;
            auto tex_h = (float)raw_img_height * 4;
            {
                ImGui::Text("upSampling image size: %.0fx%.0f", tex_w, tex_h);
                ImVec2 pos = ImGui::GetCursorScreenPos();
                ImVec2 uv_min = ImVec2(0.0f, 0.0f);                 // Top-left
                ImVec2 uv_max = ImVec2(1.0f, 1.0f);                 // Lower-right
                ImVec4 tint_col = ImVec4(1.0f, 1.0f, 1.0f, 1.0f);   // No tint
                ImVec4 border_col = ImVec4(1.0f, 1.0f, 1.0f, 0.5f); // 50% opaque white
                ImGui::Image(tex_id, ImVec2(tex_w, tex_h), uv_min, uv_max, tint_col, border_col);
                if (ImGui::IsItemHovered())
                {
                    ImGui::BeginTooltip();
                    float region_sz = 32.0f;
                    float region_x = io.MousePos.x - pos.x - region_sz * 0.5f;
                    float region_y = io.MousePos.y - pos.y - region_sz * 0.5f;
                    float zoom = 8.0f;
                    if (region_x < 0.0f) { region_x = 0.0f; }
                    else if (region_x > tex_w - region_sz) { region_x = tex_w - region_sz; }
                    if (region_y < 0.0f) { region_y = 0.0f; }
                    else if (region_y > tex_h - region_sz) { region_y = tex_h - region_sz; }
                    ImGui::Text("Min: (%.2f, %.2f)", region_x, region_y);
                    ImGui::Text("Max: (%.2f, %.2f)", region_x + region_sz, region_y + region_sz);
                    ImVec2 uv0 = ImVec2((region_x) / tex_w, (region_y) / tex_h);
                    ImVec2 uv1 = ImVec2((region_x + region_sz) / tex_w, (region_y + region_sz) / tex_h);
                    ImGui::Image(tex_id, ImVec2(region_sz * zoom, region_sz * zoom), uv0, uv1, tint_col, border_col);
                    ImGui::EndTooltip();
                }
            }
        }
        ImGui::Render();
        int display_w, display_h;
        glfwGetFramebufferSize(window, &display_w, &display_h);
        glViewport(0, 0, display_w, display_h);
        glClearColor(clear_color.x * clear_color.w, clear_color.y * clear_color.w, clear_color.z * clear_color.w, clear_color.w);
        glClear(GL_COLOR_BUFFER_BIT);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        glfwSwapBuffers(window);
    }
    ImGui_ImplOpenGL3_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
}


