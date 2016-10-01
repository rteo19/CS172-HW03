//Ryan Teo
//CS 172
//Ex03_05 MyInteger Class

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class MyInteger  //creates class
{
private:
	int value;
public:
	MyInteger(int Value) //Construtor 
	{
		value = Value;
	}

	//constant get function to return the int value
	int getValue() const
	{
		return value;
	}

	//Constant functions
	bool isEven() const
	{
		return isEven(value);
	}

	bool isOdd() const
	{
		return isOdd(value);
	}

	bool isPrime() const
	{
		return isPrime(value);
	}

	//Static functions
	static bool isEven(int even)
	{
		return even % 2 == 0;
	}

	static bool isOdd(int odd)
	{
		return odd % 2 == 1;
	}

	static bool isPrime(int prime)
	{
		if ((prime == 1) || (prime == 2))
		{
			return true;
		}

		for (int i = 2; i <= prime / 2; i++)
		{
			if (prime % i == 0)
				return false;
		}

		return true;
	}

	//Static functions passed by reference
	static bool isEven(const MyInteger& even)
	{
		return isEven(even.getValue());
	}

	static bool isOdd(const MyInteger& odd)
	{
		return isEven(odd.getValue());
	}

	static bool isPrime(const MyInteger& prime)
	{
		return isPrime(prime.getValue());
	}

	//constant functions that return true if the object value is equal to some specified value
	bool equals(int x) const
	{
		return value == x;
	}

	bool equals(const MyInteger& prime) const
	{
		return value == prime.getValue();
	}

	//static function that converts a string to an int
	static int parseInt(const string& string)
	{
		return atoi(string.c_str());
	}

};


int main()
{
	int test; //test integer for the class
	string testStr; //test string for the class
	
	cout << "Enter a value: "; //prompt user for a test value
	cin >> test;

	MyInteger x(test); //implementation of class

	//tests constant functions
	int getValue = x.getValue();
	cout << getValue << endl;

	int isEven = x.isEven();
	cout << isEven << endl;

	int isOdd = x.isOdd();
	cout << isOdd << endl;

	int isPrime = x.isPrime();
	cout << isPrime << endl;

	//tests static functions
	cout << x.isEven(test) << endl;
	cout << x.isOdd(test) << endl;
	cout << x.isPrime(test) << endl;

	//tests static functions passed by reference
	cout << x.isEven(MyInteger(test)) << endl;
	cout << x.isOdd(MyInteger(test)) << endl;
	cout << x.isPrime(MyInteger(test)) << endl;

	//tests the equals functions
	int num;
	cout << "Enter another value: "; //prompts user for another value to compare with the first one
	cin >> num;

	cout << x.equals(num) << endl;
	cout << x.equals(MyInteger(num)) << endl;
}

