//Ryan Murphy
//C Language
//Chapter 6
//Assignment 1
//This program reads data from the input file and loops the program 8 times in order to accomplish the required task

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
	ifstream DataFile2;		//Reads the input file
	ofstream Answers;

	int inNum;
	double Average;
	int sum;
	int diff;
	int count,closest;
	char inChar;

	
	Answers.open ("F:\\Answers.txt");			//Creates the output file (Do not Close)

//**********************************************************************************************
//A
	DataFile2.open ("F:\\DataFile2.txt");		//Opens the input file
	cout<<"The input file contains the following data:"<<endl;
	DataFile2>>inNum;
	while (DataFile2)		//Reads integers on DataFile2
	{
		cout << inNum << ' ' ;		//outputs the data to Answers.txt
		Answers << inNum << ' ' ;		//outputs the data to Answers.txt
		DataFile2>>inNum;
	}
	Answers<<endl;
	cout<<endl<<endl;
	DataFile2.close();
	DataFile2.clear();
//************************************************************************************************
//B
	DataFile2.open ("F:\\DataFile2.txt");
	sum = 0;
	count = 0;
	DataFile2 >> inNum;
	while (DataFile2)
	{
		sum = sum + inNum;
		count++;
		DataFile2 >> inNum;
	}
	Average = double (sum) / count;
	cout << "The average of all integers is " << setprecision (6) << Average << endl;
	Answers << "The average of all integers is " << setprecision (6) << Average<<endl;
	cout<<endl<<endl;
	DataFile2.close();
	DataFile2.clear();
//**************************************************************************************************
//C
	DataFile2.open ("F:\\DataFile2.txt");
	sum = 0;
	count = 1;
	
	while (count <= 12)
	{
		DataFile2 >> inNum;
		sum = sum + inNum;
		count++;
		
	}
	Average = double (sum) /12.0;
	cout <<"The average of the first 12 integers is " << setprecision (6) << Average << endl;
	Answers <<"The average of the first 12 integers is " << setprecision (6) << Average << endl;
	cout<<endl<<endl;
	DataFile2.close();
	DataFile2.clear();
//***************************************************************************************************
//D
	DataFile2.open ("F:\\DataFile2.txt");
	sum = 0;
	count = 0;
	DataFile2 >> inNum;
	while (DataFile2)
	{
		count++;
		if (count % 3 == 0)
			sum = sum + inNum;
		DataFile2 >> inNum;
	}
	cout <<"The sum of every third integer is " << sum << endl;
	Answers <<"The sum of every third integer is " << sum << endl;
	cout<<endl<<endl;
	DataFile2.close();
	DataFile2.clear();
//*****************************************************************************************************
//E
	
	DataFile2.open ("F:\\DataFile2.txt");
	int smallest,largest;
	DataFile2>>inNum;
	smallest = largest = inNum;
	while (DataFile2)
	{
		DataFile2 >> inNum;
		if(inNum < smallest)
			smallest = inNum;
		if(inNum > largest)
			largest = inNum;
	}

	cout<<"The smallest value is "<<smallest<<endl;
	cout<<"The largest value is "<<largest<<endl<<endl;
	Answers<<"The smallest value is "<<smallest<<endl;
	Answers<<"The largest value is "<<largest<<endl<<endl;
	DataFile2.close();
	DataFile2.clear();

//****************************************************************************************************
//F
	DataFile2.open ("F:\\DataFile2.txt");
	
	sum = 0;
	DataFile2 >> inNum;
	closest = inNum;
	diff = abs(inNum - 200);
	while (DataFile2)
	{
		DataFile2 >> inNum;
		if(abs(inNum - 200) < diff)
		{
			diff = abs( inNum -200);
			closest = inNum;
		}
	}
	cout <<"The integer closest to 200 is "<< closest <<endl;
	Answers <<"The interger closest to 200 is "<< closest << endl;
	DataFile2 >> inNum;
	cout<<endl<<endl;
	DataFile2.close();
	DataFile2.clear();
//******************************************************************************************************
//G
	DataFile2.open ("F:\\DataFile2.txt");
	sum = 0;
	count = 0;
	inChar = ' ';
	while (inChar != '\n')
	{
		DataFile2 >> inNum;
		DataFile2.get (inChar);
		sum = sum + inNum;
		count++;
	}
	inChar = ' ';
	while (inChar != '\n')
	{
		DataFile2 >> inNum;
		DataFile2.get (inChar);
		sum = sum + inNum;
		count++;
	}
	Average = double (sum) / count;
	cout <<"The average of the integers in the first two lines is " << setprecision (6) << Average << endl;
	Answers <<"The average of the integers in the first two lines is " << setprecision (6) << Average << endl;
	cout <<endl<<endl;

	DataFile2.close();
	DataFile2.clear();
//******************************************************************************************************
//H
	DataFile2.open ("F:\\DataFile2.txt");
	sum = 0;

	bool lessthan1000 = true;
	while (lessthan1000)
	{
		DataFile2 >> inNum;
		if(sum + inNum < 1000)
			sum = sum + inNum;
		else
			lessthan1000 = false;
		
	}
	
	
	cout <<"The sum of integers that is not greater or equal to 1000 is " << sum <<endl;
	Answers <<"The sum of integers that is not greater or equal to 1000 is " << sum <<endl;
	cout<<endl<<endl;
	DataFile2.close();
	DataFile2.clear();

	return 0;
}