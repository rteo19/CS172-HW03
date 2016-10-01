#pragma once
using namespace std;

class QuadraticEquation //creates the class
{
private:
	double a; //integers to represent 3 coefficients
	double b;
	double c;
public:
	QuadraticEquation(double A, double B, double C); //constructor for a, b, and c
	
	double getA(); //get functions to return the values of a, b, and c

	double getB();

	double getC();

	double getDiscriminant(); //get function that calculates discriminant and returns the value

	double getRoot1(); //calculates and returns the value of the first root

	double getRoot2(); //calculates and returns the value of the second root
};