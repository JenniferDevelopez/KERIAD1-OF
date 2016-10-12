#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp {

    public:

        void setup();

        void audioOut(float* input, int bufferSize, int nChannels);

        float phase;
        ofSoundStream soundStream;
};
