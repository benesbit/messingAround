// Gravity Run!
// Ben Nesbit
// Started: 07/11/2018
// Like flappy bird, but moving upward in a virtical direction
// Gravity will pull the ship horizontally, and will switch directions

#include "ofApp.h"


void ofApp::setup(){
	ofBackground(0);
	shipLeft.load("Images/shipLeft.png");
	shipRight.load("Images/shipRight.png");
	shipStraight.load("Images/shipStraight.png");

	playerShip = new Ship(&shipLeft, &shipRight, &shipStraight);
}


void ofApp::update(){
	if (keyIsDown['a']) {
		playerShip->thrustLeft();
	}
	if (keyIsDown['d']) {
		playerShip->thrustRight();
	}
	if (keyIsDown['a'] && keyIsDown['d']) {
		playerShip->drift();
	}
	if (keyIsDown['a'] == false && keyIsDown['d'] == false) {
		playerShip->drift();
	}
	playerShip->waver();
}


void ofApp::draw(){
	playerShip->draw();
}


void ofApp::keyPressed(int key){
	keyIsDown[key] = true;
}


void ofApp::keyReleased(int key){
	keyIsDown[key] = false;
	if (key == 'a' || key == 'd') {
		playerShip->drift();
	}
	
}


void ofApp::mouseMoved(int x, int y ){

}


void ofApp::mouseDragged(int x, int y, int button){

}


void ofApp::mousePressed(int x, int y, int button){

}


void ofApp::mouseReleased(int x, int y, int button){

}


void ofApp::mouseEntered(int x, int y){

}


void ofApp::mouseExited(int x, int y){

}


void ofApp::windowResized(int w, int h){

}


void ofApp::gotMessage(ofMessage msg){

}


void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
