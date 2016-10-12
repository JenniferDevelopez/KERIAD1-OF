#pragma once

#include "ofMain.h"

class Ball {

    public:

        Ball();

        void setup(int startX, int startY, int startSpeedX, int startSpeedY, int startRadius, ofColor col);

        void update();

        void draw();

        // variables
        float x;
        float y;
        float speedY;
        float speedX;
        int radius;
        ofColor colour;
};
