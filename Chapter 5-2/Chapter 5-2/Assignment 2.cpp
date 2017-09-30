//Ryan Murphy
//C Language
//Chapter 5 Assignment
//Assignment 2
//This program will find the median of the three numbers that are input by the user


#include <iostream>

using namespace std;

int main()
{
	float num1, num2, num3;

	cout << "This program will show the median of the 3 numbers the user inputs." << endl << endl;

	cout << "Input 3 numbers:" << endl;
	cin >> num1 >> num2 >> num3;

	if (num1 < num2 && num2 < num3)
	cout <<"The median of the 3 numbers is " << num2 << endl;

	else
		if (num1 > num2 && num2 > num3)
		cout <<"The median of the 3 numbers is  " << num2 << endl;

	else
		if (num2 < num1 && num1 < num3)
		cout <<"The median of the 3 numbers is " << num1 << endl;

	else
		if (num2 > num1 && num1 > num3)
		cout <<"The median of the 3 numbers is " << num1 << endl;

	else
		if (num3 < num1 && num3 > num2)
		cout <<"The median of the 3 numbers is " << num3 << endl;

	else
		if (num3 > num1 && num3 < num2)
		cout <<"The median of the 3 numbers is " << num3 << endl;

	return 0;
}