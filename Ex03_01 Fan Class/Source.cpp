//Ryan Teo
//CS 172
//Ex03_01 Fan Class

#include <iostream>
#include <string>
using namespace std;

class Fan 
{
private:
	int speed;
	bool on;
	double radius;
	string color;
public:
	Fan() //no-arg constructor w/ default fan
	{
		speed = 1;
		on = false;
		radius = 5;
		color = string("white");
	}

	int getSpeed()
	{
		return speed;
	}

	void setSpeed(int Speed)
	{
		if (Speed > 0 && Speed < 3) //check if Speed is in a valid range
		{
			speed = Speed;
		}
	}

	bool isOn()
	{
		return on;
	}

	void setOn(bool On)
	{
		on = On;
	}

	double getRadius()
	{
		return radius;
	}

	void setRadius(double Radius)
	{
		radius = Radius;
	}

	string getColor()
	{
		return color;
	}

	void setColor(string Color)
	{
		color = Color;
	}


};

int main() //test program
{
	Fan fan1; //Creates first fan object
	//assigns the speed, radius, on whether or not the fan is on
	fan1.setSpeed(3);
	fan1.setRadius(10);
	fan1.setOn(true);

	//Outputs the properties of the first fan
	cout << "First fan: " << endl;
	cout << "Fan speed: " << fan1.getSpeed() << endl;
	cout << "Fan radius: " << fan1.getRadius() << endl;
	cout << "On: " << fan1.isOn() << endl;

	Fan fan2; //creates second fan object
	//assigns the speed, radius, on whether or not the fan is on
	fan2.setSpeed(2);
	fan2.setRadius(5);
	fan2.setOn(false);

	//outputs the properties of the second fan
	cout << "Second fan: " << endl;
	cout << "Fan speed: " << fan2.getSpeed() << endl;
	cout << "Fan radius: " << fan2.getRadius() << endl;
	cout << "On: " << fan2.isOn() << endl;

	return 0;
}