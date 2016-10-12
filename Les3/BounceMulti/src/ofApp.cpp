#include "ofApp.h"

void ofApp::setup() {
    ofBackground(ofColor::black);

    gui.setup("Instellingen", "settings.xml");
    gui.add(radius.set("Radius", 50, 10, 200));
    gui.add(speedX.set("SpeedX", 5, 5, 30));
    gui.add(speedY.set("SpeedY", 5, 5, 30));
    gui.add(colour.set("Colour", ofColor::red));
}

void ofApp::update() {
    for (int i = 0; i < balls.size(); ++i) {
        balls[i].update()
    }
}

void ofApp::draw() {
    gui.draw();

    for (int i = 0; i < balls.size(); ++i) {
        balls[i].draw();
    }

    ofSetColor(ofColor::white);
    ofNoFill();
    ofDrawCircle(ofGetWidth() / 2, ofGetHeight() / 2, radius);
}

void ofApp::keyPressed(int key) {
    if (key == ' ') {
        Ball ball;
        ball.setup(ofRandom(ofGetWidth()),
                   ofRandom(ofGetHeight()),
                   speedX,
                   speedY,
                   radius,
                   colour);
        balls.push_back(ball);
    }
}