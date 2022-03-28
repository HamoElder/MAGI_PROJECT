//
// Created by missdown on 3/26/22.
//

#ifndef ADS_FSR_EASUPASS_H
#define ADS_FSR_EASUPASS_H
#include <iostream>
#include <memory>
#include "glm/vec4.hpp"
#include "engine/shader.h"

//#include
namespace ADS_FSR {

    class EASUPass{
    public:
        EASUPass(const char * vShader_path, int vShaderType){
            shader_ptr = std::make_shared<MAGI_ENGINE::Shader>(MAGI_ENGINE::Shader(vShader_path, vShaderType));
        }
        void initShader(unsigned int input_img_texture,
                        unsigned int easu_out_texture,
                        int input_img_width,
                        int input_img_height,
                        int easu_out_width,
                        int easu_out_height){
            m_in_width = input_img_width;
            m_in_height = input_img_height;
            m_out_width = easu_out_width;
            m_out_height = easu_out_height;
            fsrEasuCon(m_in_width, m_in_height, m_out_width, m_out_height);
            shader_ptr->use();
            shader_ptr->setInt("u_InputTexture", input_img_texture);
            shader_ptr->setInt("u_DisplayWidth", m_out_width);
            shader_ptr->setInt("u_DisplayHeight", m_out_height);
            shader_ptr->setVec4("u_Con0", this->Con0);
            shader_ptr->setVec4("u_Con1", this->Con1);
            shader_ptr->setVec4("u_Con2", this->Con2);
            shader_ptr->setVec4("u_Con3", this->Con3);
        }
        void updata(){

        }
        void fsrEasuCon(
                float inputSizeInPixelsX,
                float inputSizeInPixelsY,
                float outputSizeInPixelsX,
                float outputSizeInPixelsY);
    private:
        std::shared_ptr<MAGI_ENGINE::Shader> shader_ptr;

        glm::vec4 Con0 = glm::vec4(0);
        glm::vec4 Con1 = glm::vec4(0);
        glm::vec4 Con2 = glm::vec4(0);
        glm::vec4 Con3 = glm::vec4(0);

        int m_in_width{};
        int m_in_height{};
        int m_out_width{};
        int m_out_height{};
    };


}

#endif //ADS_FSR_EASUPASS_H
