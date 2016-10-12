#include "ofApp.h"

void ofApp::setup() {
    gui.setup("Instellingen", "settings.xml");
    gui.add(radius.set("Radius", 50, 10, 200));
}

void ofApp::update() {
    ball.update();

    // if the value of the slider is different from the
    // value inside the ball, update the ball
    // (so changes in the slider immediately become visible)
    if (radius != ball.radius) {
        ball.radius = radius;
    }
}

void ofApp::draw() {
    gui.draw();
    ball.draw();
}

void ofApp::keyPressed(int key) {
    if (key == ' ') {
        ball.setup(ofRandom(ofGetWidth()),
                   ofRandom(ofGetHeight()),
                   radius);
    }
}
