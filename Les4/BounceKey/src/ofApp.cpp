#include "ofApp.h"


void ofApp::setup() {
    gui.setup("Instellingen", "settings.xml");
    gui.add(radius.set("Radius", 50, 10, 200));
    gui.add(speedX.set("SpeedX", 5, 5, 30));
    gui.add(speedY.set("SpeedY", 5, 5, 30));
    gui.add(colour.set("Colour", ofColor::blue));
}

void ofApp::update() {
    for (unsigned int i = 0; i < balls.size(); i++) {
        balls[i].update();
    }
}

void ofApp::draw() {
    gui.draw();

    for (unsigned int i = 0; i < balls.size(); i++) {
        balls[i].draw();
    }
}

void ofApp::keyPressed(int key) {
    Ball newBall;
    newBall.setup(speedX, speedY, radius, colour);
    balls.push_back(newBall);
}

void ofApp::mousePressed(int x, int y, int button) {
    if (balls.size() > 0) {
        balls.pop_back();
    }
}
