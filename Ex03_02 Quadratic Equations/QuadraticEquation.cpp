#include <iostream>
#include <cmath>
#include "QuadraticEquation.h"
using namespace std;

QuadraticEquation::QuadraticEquation(double A, double B, double C) 
{
	a = A; //assigns the values of a, b, and c new values that the user can input
	b = B;
	c = C;
}

double QuadraticEquation::getA()
{
	return a;
}

double QuadraticEquation::getB()
{
	return b;
}

double QuadraticEquation::getC()
{
	return c;
}

double QuadraticEquation::getDiscriminant()
{
	return b * b - 4 * a * c;
}

double QuadraticEquation::getRoot1()
{
	if (getDiscriminant() < 0) //checks if discriminant is negative
	{
		return 0; //if it is, then return 0
	}
	else //if discriminant is not negative calculate the first root
	{
		return (-b + sqrt(getDiscriminant())) / (2 * a); 
	}
}

double QuadraticEquation::getRoot2()
{
	if (getDiscriminant() < 0) //checks if discriminant is negative
	{
		return 0; //if it is, then return 0
	}
	else //if discriminant is not negative calculate the second root
	{
		return (-b - sqrt(getDiscriminant())) / (2 * a);
	}
}
