#ifndef LANDER_H
#define LANDER_H

#include "point.h"
#include "velocity.h"
#include <iostream>

class Lander
{
private:
	int fuel;
	bool landed;
	bool alive;
	Point location;
	Velocity speed;
	bool thrust;
public:
	//Default constructor
	Lander() : fuel(0), landed(false), alive(true), location(-100.0F, 199.0F), 
		speed(), thrust(true) {};

	//Setters
	void setLanded(bool landed);
	void setAlive(bool alive);
	void setFuel(int fuel);

	//Getters
	Point getPoint() const { return location; }
	Velocity getVelocity() const { return speed; }
	bool isAlive() { return alive; }
	bool isLanded() { return landed; }
	int getFuel() { return fuel; }

	//Action Functions
	bool canThrust();
	void applyGravity(float gravity);
	void applyThrustLeft();
	void applyThrustRight();
	void applyThrustBottom();

	//Game Functions
	void advance();
	void draw();
};

#endif LANDER_H
