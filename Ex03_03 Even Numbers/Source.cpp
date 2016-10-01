//Ryan Teo
//CS 172
//Ex03_03 9.11 Even Number Class

#include <iostream>
#include "EvenNumber.h"
using namespace std;

int main()
{
	int value = 16; //test value for class
	int next, previous;
	EvenNumber num(value); //implementation of class
	next = num.getNext();
	previous = num.getPrevious();
	cout << next << " " << previous << endl; //displays the next and previous numbers
	 
}
