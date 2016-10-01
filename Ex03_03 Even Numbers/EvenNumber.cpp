#include <iostream>
#include "EvenNumber.h"
using namespace std;

EvenNumber::EvenNumber()
{
	int zero = 0; //creates object for the value of 0
}

EvenNumber::EvenNumber(int Value)
{
	value = Value; //assigns "value" a specified value
}

int EvenNumber::getValue()
{
	return value; //
}

int EvenNumber::getNext()
{
	return value + 2; //adding 2 gives the next even number
}

int EvenNumber::getPrevious()
{
	return value - 2; //subtracting 2 gives the previous even number
}