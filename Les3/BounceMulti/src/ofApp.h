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

        vector<Ball> balls;

        ofxPanel gui;
        ofParameter<int> radius;
        ofParameter<int> speedX;
        ofParameter<int> speedY;
        ofParameter<ofColor> colour;
};
