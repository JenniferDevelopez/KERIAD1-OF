#pragma once

#include "ofMain.h"
#include "Ball.h"
#include "ofxGui.h"


class ofApp : public ofBaseApp {


    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

        Ball ball;

        ofxPanel gui;
        ofParameter<int> radius;
};
