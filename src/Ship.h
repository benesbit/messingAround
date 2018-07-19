// Ship.h

#pragma once

#include "ofMain.h"

class Ship {
public:
	Ship();
	Ship(ofImage *imgL, ofImage *imgR, ofImage *imgS);
	void draw();
	void thrustLeft();
	void thrustRight();
	void drift();
	void trap();
	void waver();

private:
	ofVec2f pos, vel, accel;
	ofImage *shipL, *shipR, *shipS;
	char orientation;
	ofRectangle bodyBox, wingBox;
	float time;
};