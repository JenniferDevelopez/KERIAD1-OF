#include "ofApp.h"


void ofApp::setup() {
    ofSetFrameRate(60);

    ofBackground(30, 30, 30);

    drawGrid = false;

    planet01.setup("planet 1");
    planetParams.add(planet01.planetParamGroup);

    planet02.setup("planet 2");
    planetParams.add(planet02.planetParamGroup);

    planet03.setup("planet 3");
    planetParams.add(planet03.planetParamGroup);

    gui.setup(planetParams);
    gui.add(drawLight.set("Light", false));
    gui.add(drawGrid.set("Grid", false));
    gui.add(useLight.set("Use lighting", true));

    light.setDirectional();
    light.setPosition(-200, -200, -200);
    light.lookAt(ofVec3f(0, 0, 0), ofVec3f(0, 0, 0));
    light.setDiffuseColor(ofColor(255, 255, 255));
    light.enable();
}

void ofApp::update() {
    planet01.update();
    planet02.update();
    planet03.update();
}

void ofApp::draw() {
    gui.draw();

    if (useLight) {
        ofEnableLighting();
    } else {
        ofDisableLighting();
    }

    ofEnableDepthTest();
    cam.begin();

    if (drawLight) light.draw();
    if (drawGrid) ofDrawGrid(200);

    planet01.draw();

    ofTranslate(planet01.distance, 0);
    planet02.draw();

    ofTranslate(planet02.distance,0);
    planet03.draw();

    cam.end();
    ofDisableDepthTest();
}

void ofApp::keyPressed(int key) {
    if (key == 'g') {
        drawGrid = !drawGrid;
    } else if (key == 'l') {
        drawLight = !drawLight;
    } else if (key == 'k') {
        useLight = !useLight;
    }
}
