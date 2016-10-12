#pragma once

#include "ofMain.h"

#define MAXBALLS 10

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

        float x[MAXBALLS];
        float y[MAXBALLS];
        float speedY[MAXBALLS];
        float speedX[MAXBALLS];
        int radius[MAXBALLS];
        ofColor color[MAXBALLS];
};
