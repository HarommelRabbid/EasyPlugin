#pragma once

#include <vita2d.h>
#include "../main.hpp"

class Details {
    public:
        void draw(SharedData &sharedData, unsigned int button);
        void free();

    private:
        string longDescription;
        int lastNum = 0;
        int imageCycles = 0;
        int cycleCounter = 0;
        vita2d_texture *desc1 = vita2d_load_PNG_file("app0:resources/desc1.png");
};