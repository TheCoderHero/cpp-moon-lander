#include "lander.h"
#include "uiDraw.h"


//Setters
void Lander::setLanded(bool landed)
{
	this->landed = landed;
}

void Lander::setAlive(bool alive)
{
	this->alive = alive;
}

void Lander::setFuel(int fuel)
{
	this->fuel = fuel;
}


bool Lander::canThrust()
{
	if (fuel > 0)
		thrust = true;
	else
		thrust = false;
	return thrust;
}

void Lander :: applyGravity(float gravity)
{
	speed.setDy(gravity);
}

void Lander::applyThrustLeft()
{
	if (fuel <= 0)
	{
		fuel = 0;
		location.addX(0);
	}
	else
	{
		speed.setDx(0.1F);
		setFuel(fuel - 1);
	}
}

void Lander::applyThrustRight()
{
	if (fuel <= 0)
	{
		fuel = 0;
		location.addX(0);
	}
	else
	{
		speed.setDx(-0.1F);
		setFuel(fuel - 1);
	}
}

void Lander::applyThrustBottom()
{
	if (fuel <= 0)
	{
		fuel = 0;
		location.addY(0);
	}
	else
	{
		speed.setDy(-0.2F);
		setFuel(fuel - 3);
	}
}

void Lander::advance()
{
	location.addY(speed.getDy() * -1);
	location.addX(speed.getDx());
}

void Lander::draw()
{
	drawLander(location);
}