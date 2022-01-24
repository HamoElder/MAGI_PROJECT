set(imgui_inc_list)

set(IMGUI_HOME ${PROJECT_SOURCE_DIR}/3rdParty/imgui)
set(IMGUI_SRC "${IMGUI_HOME}")
set(IMGUI_BACKEND "${IMGUI_HOME}/backends")

file(GLOB imgui_src_files "${IMGUI_SRC}/*.cpp")

list(APPEND imgui_src_files "${IMGUI_BACKEND}/imgui_impl_opengl3.cpp")
list(APPEND imgui_src_files "${IMGUI_BACKEND}/imgui_impl_glfw.cpp")

list(APPEND imgui_inc_list ${IMGUI_SRC})
list(APPEND imgui_inc_list ${IMGUI_BACKEND})

set(IMGUI_INC_DIR "${imgui_inc_list}" CACHE STRING "Imgui include list")
set(IMGUI_SRC_LIST "${imgui_src_files}" CACHE STRING "Imgui source files list")

