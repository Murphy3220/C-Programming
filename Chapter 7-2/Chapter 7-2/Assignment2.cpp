//Ryan Murphy
//C Language
//Chapter 7
//Assignment 2

#include <iostream>

using namespace std;

int main()
{
	int line;
	int lessthan;
	int greaterthan;
	int asterisks;
	int pound;


	for (int line = 1; line <= 7; line++)
	{
		for (int lessthan = 1; lessthan <= 7 - line; lessthan++)
			cout <<"<";
		cout << "\t";
		for (int pound = 1; pound <= 14-(2 * line); pound++)
			cout <<"#";
		for (int asterisks = 11; asterisks >= 14 - (line *2); asterisks--)
			cout <<"*";
		cout << "\t";
		for (int greaterthan = 1; greaterthan <= 7 - line; greaterthan++)
			cout <<">";
		cout <<endl;
	}

	return 0;
}