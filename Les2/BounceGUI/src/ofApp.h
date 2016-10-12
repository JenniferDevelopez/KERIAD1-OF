#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

        void mousePressed(int x, int y, int button);

        ofxPanel gui;
        ofParameter<int> radius;
        ofParameter<float> speedX;
        ofParameter<float> speedY;
        ofParameter<ofColor> color;
};
