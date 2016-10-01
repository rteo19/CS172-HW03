#pragma once
using namespace std;

class EvenNumber //creates EvenNumber class
{
private:
	int value;
public:
	EvenNumber(); //No argument constructor

	EvenNumber(int Value); //Constructor for specified value

	int getValue(); //returns value of "value"

	int getNext(); //returns the next even number

	int getPrevious(); //returns the previous even number

};

