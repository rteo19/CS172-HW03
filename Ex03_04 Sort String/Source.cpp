//Ryan Teo
//CS 172
//Ex03_04 Sort Characters in String

#include <iostream>
#include <string>
using namespace std;


string sort(string &s) //function header
{
	for (int i = s.length() - 1; i >= 0; i--) //subtract one so that it loops for as many lettes are in the string
	{

		char max = s[0]; //sets char equal to the first letter in the string
		int currentMax = 0; //initial max value set to zero

		for (int x = 1; x <= i; x++) //finds the max in the string
		{
			if (max < s[x])
			{
				max = s[x];
				currentMax = x;
			}
		}

		if (currentMax != i) //sorts string
		{
			s[currentMax] = s[i];
			s[i] = max;
		}
	}

	return s; //returns the sorted string
}

int main()
{
	string s; //initialize string
	cout << "Enter a string s: "; //prompt user for string
	getline(cin, s); //assigns user input to s 

	cout << "The sorted string is " << sort(s) << endl; //outputs the sorted string

	return 0;
}