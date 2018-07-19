// Ship.cpp

#include "Ship.h"

Ship::Ship() {

}

Ship::Ship(ofImage *imgL, ofImage *imgR, ofImage *imgS) {
	this->shipL = imgL;
	this->shipR = imgR;
	this->shipS = imgS;
	this->pos.set(ofGetWidth() / 2, ofGetHeight() - (ofGetHeight() / 4));
	this->vel.set(0, 0);
	this->accel.set(0, 0);
	this->orientation = 's';
	this->time = 0;
}

void Ship::draw() {
	if (this->orientation == 's') {
		this->shipS->draw(this->pos);
	}
	if (this->orientation == 'l') {
		this->shipL->draw(this->pos);
	}
	if (this->orientation == 'r') {
		this->shipR->draw(this->pos);
	}
}

void Ship::thrustLeft() {
	this->orientation = 'l';
	this->accel.x -= 0.005;
	this->vel.x += this->accel.x;
	this->pos.x += this->vel.x;
}

void Ship::thrustRight() {
	this->orientation = 'r';
	this->accel.x += 0.005;
	this->vel.x += this->accel.x;
	this->pos.x += this->vel.x;
}

// The drifting de-acceleration is not working properly
void Ship::drift() {
	this->orientation = 's';
	float temp = this->accel.x;
	this->accel.x = temp * 0.01;
	this->vel.x = this->accel.x;
	this->pos.x += this->vel.x;
}

void Ship::trap() {

}

void Ship::waver() {
	this->pos.y += (sin(time)) * 0.75;
	time += 0.045;
	if (time >= 1000) {
		time = 0;
	}
}