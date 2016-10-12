#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        // bal 1
        float x1;
        float y1;
        float speedY1;
        float speedX1;
        int radius1;
        ofColor color1;

        // bal 2
        float x2;
        float y2;
        float speedY2;
        float speedX2;
        int radius2;
        ofColor color2;

};
