#pragma once

// Ship.h

class Ship {
public:
	Ship();
	void draw();
	void move();

private:
	ofVec2f pos, vel, accel;
	ofImage *shipL, *shipR, *shipS;
};