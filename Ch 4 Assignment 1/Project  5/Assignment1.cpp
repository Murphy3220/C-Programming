//Ryan Murphy
//C Programming
//Chapter 4 Assignment
//Assignment 6
//This program allows the user to input the A, B, and C values in the quadraction equation, and solve the problem.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double A;		//User input for A
	double B;		//User input for B
	double C;		//User input for C
	double x1;		//Solution 1 for inputs A, B, and C
	double x2;		//Solution 2 for inputs A, B, and C

	cout << "Enter the values of A, B and C to solve X1 and X2" << endl << endl;

	cout << "Enter the value of A" << endl;
	cin >> A;
	cout << endl;

	cout << "Enter the value of B" << endl;
	cin >> B;
	cout << endl;

	cout << "Enter the value of C" << endl;
	cin >> C;
	cout << endl;

	x1 = (-B + sqrt (B * B - 4 * A * C)) / (2 * A);		//Calculates for solution 1
	x2 = (-B - sqrt (B * B- 4 * A * C)) / (2 * A);		//Calculates for solution 2

	cout << "The values of X1 and X2 equal:" << endl;
	cout << "X1=" << x1 << endl;
	cout << "X2=" << x2 << endl;

	return 0;
}