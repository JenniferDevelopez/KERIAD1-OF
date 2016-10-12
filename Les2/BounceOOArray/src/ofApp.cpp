#include "ofApp.h"

void ofApp::setup() {
    for (int i = 0; i < MAXBALLS; i++) {
        ball[i].setup();
    }
}

void ofApp::update() {
    for (int i = 0; i < MAXBALLS; i++) {
        ball[i].update();
    }
}

void ofApp::draw() {
    for (int i = 0; i < MAXBALLS; i++) {
        ball[i].draw();
    }
}
