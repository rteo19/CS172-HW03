//Ryan Teo
//CS 172
//Ex03_02 9.6 Algebra Quadratic Equation
//Pg 368

#include <iostream>
#include "QuadraticEquation.h" //Quadratic Equation class
using namespace std;

int main()
{
  cout << "Enter a, b, c: "; //Prompts user for values
  double a, b, c, discriminant;
  cin >> a >> b >> c; //assigns these values to a, b, and c

  QuadraticEquation equation(a, b, c); //Implementation of class using user's input values
  discriminant = equation.getDiscriminant(); //assigns the value of the discriminant to a variable

  if (discriminant < 0) //checks if the discriminant is negative
  {
    cout << "The equation has no roots" << endl; //if it is, then outputs that there are no roots
  }
  else if (discriminant == 0) //checks if the discriminant is equal to zero
  {
    cout << "The root is " << equation.getRoot1() << endl; //if it is, outputs the single root
  }
  else //if the discriminant is not negative or equal to zero then it's positive and there are two roots
  {
     cout << "The roots are " << equation.getRoot1() << " and " //outputs the two roots
       << equation.getRoot2() << endl;
  }

  return 0;
}