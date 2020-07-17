#ifndef VELOCITY_H
#define VELOCITY_H

class Velocity
{
private:
	float x;
	float y;
public:

	//Default Constructor
	Velocity() : x(0.0F), y(0.0F) {}

	//Non-default constructor
	Velocity(float x, float y)
	{
		setDx(x);
		setDy(y);
	}

	//Setters
	void setDx(float x);
	void setDy(float y);

	//Getters
	float getDx() const {return x;}
	float getDy() const {return y;}

};

#endif
