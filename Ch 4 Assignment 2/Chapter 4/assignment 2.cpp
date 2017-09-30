// Ryan Murphy
// C Programming
// Chapter 4 Assignment
// Assignment 2
// This program will read input data from a file and display it on the screen

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream payinFile;				// Reads the input file
	ofstream payoutFile;
	float employeePayAvg;			// Average pay for all Employees
	float employeeCatXPay;			// Average Employee pay for Category X employees
	float employeeCatYPay;			// Average Emplyee pay for Category Y employees
	float employeeCatZPay;			// Average Employee pay for Category Z employees
	float employeeNumAvg;			// Average number of employees

	char Cat1, Cat2, Cat3;
	double Pay1, Pay2, Pay3;
	int employeeNum1, employeeNum2, employeeNum3;

	payinFile.open ("F:\\payinFile.txt");		// Reads the input file
	payoutFile.open ("F:\\payoutFile.txt");		// Creates the output file

	// Read Values
	payinFile >> Cat1 >> Pay1 >> employeeNum1;
	payinFile >> Cat2 >> Pay2 >> employeeNum2;
	payinFile >> Cat3 >> Pay3 >> employeeNum3; 

	employeePayAvg = (Pay1 + Pay2 + Pay3) / (employeeNum1 + employeeNum2 + employeeNum3);	//Calulates the average pay for all employees
	employeeCatXPay = Pay1 / employeeNum1;								//Calculates the average pay for employees in Category X
	employeeCatYPay = Pay2 / employeeNum2;								//Calculates the average pay for employees in Category Y
	employeeCatZPay = Pay3 / employeeNum3;								//Calculates the average pay for employees in Category Z
	employeeNumAvg = (employeeNum1 + employeeNum2 + employeeNum3) / 3;	//Calculates the average number of employees

	payoutFile << "The input file contains the following data:" << endl;
	cout << "The input file contains the following data:" << endl;
	payoutFile << Cat1 << " " << setprecision (7) << Pay1 << " " << employeeNum1 << endl;
	cout << Cat1 << " " <<  setprecision (7) << Pay1 << " " << employeeNum1 << endl;
	payoutFile << Cat2 << " " << setprecision (7) << Pay2 << " " << employeeNum2 << endl;
	cout << Cat2 << " " <<  setprecision (7) << Pay2 << " " << employeeNum2 << endl;
	payoutFile << Cat3 << " " << setprecision (7) << Pay3 << " " << employeeNum3 << endl;
	cout << Cat3 << " " <<  setprecision (7) << Pay2 << " " << employeeNum3 << endl <<endl;

	payoutFile << "The average number of emplyees for all three categories is:" << " " << employeeNumAvg << endl << endl;
	cout << "The average number of emplyees for all three categories is:" << " " << employeeNumAvg << endl << endl;
	
	payoutFile << "The average pay for employees in each category is:" << endl;
	payoutFile << "Category" << " " << Cat1 << " " << "=" << " " << "$" << employeeCatXPay << endl;
	payoutFile << "Category" << " " << Cat2 << " " << "=" << " " << "$" << employeeCatYPay << endl;
	payoutFile << "Category" << " " << Cat3 << " " << "=" << " " << "$" << employeeCatZPay << endl;

	cout << "The average pay for employees in each category is:" << endl;
	cout << "Category" << " " << Cat1 << " " << "=" << " " << "$" << employeeCatXPay << endl;
	cout << "Category" << " " << Cat2 << " " << "=" << " " << "$" << employeeCatYPay << endl;
	cout << "Category" << " " << Cat3 << " " << "=" << " " << "$" << employeeCatZPay << endl << endl;

	payoutFile << "The average pay for all employees is:" << endl;
	cout << "The average pay for all employees is:" << endl;
	payoutFile << "$" << setprecision (5) << employeePayAvg << endl << endl;
	cout << "$" << setprecision (5) << employeePayAvg << endl << endl;

	return 0;
}