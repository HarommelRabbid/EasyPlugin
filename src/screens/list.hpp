#pragma once

#include <vita2d.h>
#include "../main.hpp"

class List {
    public:
        void draw(SharedData &sharedData, unsigned int button);
        void free();

    private:
        double scrollY = 0;
        double scrollPercent;
        double scrollThumbHeight;
        double scrollThumbY = 0;
        int arrayLength;
        int scrollDelay = 0;
        int scrollStage = 0;
        vector<string> subPaths;
        string searchResult = "";
        vita2d_texture *desc = vita2d_load_PNG_file("app0:resources/desc.png");
};