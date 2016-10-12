#include "ofApp.h"

void ofApp::setup() {
    gui.setup("Instellingen", "settings.xml");
    gui.add(radius.set("Radius", 50, 0, 200));
    gui.add(speedX.set("SpeedX", 20, 0, 200));
    gui.add(speedY.set("SpeedY", 20, 0, 200));
    gui.add(color.set("Color", ofColor::white));
}

void ofApp::update() {
}

void ofApp::draw() {
    gui.draw();
}

void ofApp::keyPressed(int key) {
    if (key == ' ') {

    } else if (key == OF_KEY_RETURN) {

    }
}

void ofApp::mousePressed(int x, int y, int button) {

}