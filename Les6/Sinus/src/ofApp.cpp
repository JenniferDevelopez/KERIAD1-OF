#include "ofApp.h"

void ofApp::setup() {

    ofSetFrameRate(20);
    ofBackground(34, 34, 34);

    soundStream.printDeviceList();
    soundStream.setDeviceID(3);
    soundStream.setup(this, 2, 0, 22050, 512, 4);

    phase = 0;
}

void ofApp::audioOut(float* output, int bufferSize, int nChannels) {
    for (int i = 0; i < bufferSize * nChannels; i += 2) {
        float sample = sin(phase);
        output[i] = sample;

        sample = sin(phase * 1.005f);
        output[i + 1] = sample;

        phase += 0.04;

//        if (phase > 2 * PI) {
//            phase = 0;
//        }
//        phase += 0.1;
    }
}