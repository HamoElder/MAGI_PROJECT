//
// Created by missdown on 3/26/22.
//

#include "EASUPass.h"

namespace ADS_FSR{


    void EASUPass::fsrEasuCon(float inputSizeInPixelsX, float inputSizeInPixelsY, float outputSizeInPixelsX,
                              float outputSizeInPixelsY) {
        Con0[0] = (inputSizeInPixelsX * 1.0f / outputSizeInPixelsX);
        Con0[1] = (inputSizeInPixelsY * 1.0f / outputSizeInPixelsY);
        Con0[2] = (0.5f * inputSizeInPixelsX * 1.0f / outputSizeInPixelsX - 0.5f);
        Con0[3] = (0.5f * inputSizeInPixelsY * 1.0f / outputSizeInPixelsY - 0.5f);
        Con1[0] = (1.0f / inputSizeInPixelsX);
        Con1[1] = (1.0f / inputSizeInPixelsY);
        Con1[2] = (1.0 * 1.0f / inputSizeInPixelsX);
        Con1[3] = (-1.0f * 1.0f / inputSizeInPixelsY);
        Con2[0] = (-1.0f * 1.0f / inputSizeInPixelsX);
        Con2[1] = (2.0f * 1.0f / inputSizeInPixelsY);
        Con2[2] = (1.0f * 1.0f / inputSizeInPixelsX);
        Con2[3] = (2.0f * 1.0f / inputSizeInPixelsY);
        Con3[0] = (0.0f * 1.0f / inputSizeInPixelsX);
        Con3[1] = (4.0f * 1.0f / inputSizeInPixelsY);
        Con3[2] = Con3[3] = 0;
    }
}

