//Ryan Murphy
//C Language
//Chapter 11 Assignment 1
//This program reads integers from a file and puts them into a single dimension array

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int array [10];
int largest;
int smallest;
ifstream inNums;
ofstream Chapter11;

void SelSort(int data[],int length); //Function used to sort the integers in the array


void main()
{
	inNums.open ("F:\\inNums.txt"); //Opens the input file
	Chapter11.open ("F:\\Chapter11.txt"); //Opens the output file


//*******************************************************************************
//A - Reads the integers from the file into array
	for (int index = 0; index < 10; index++)
		inNums>>array[index];

//*******************************************************************************
//B - Outputs the integers from the array on the same line
	Chapter11<<"All integers on the same line:"<<endl;
	for (int index =0; index < 10; index++)
		Chapter11<<array[index]<<" ";
		Chapter11<<endl<<endl;

//*******************************************************************************
//C - Outputs the 4th integer in the array
	Chapter11<<"The 4th integer in the array is:"<<endl;
	for (int index = 3;index < 4;index++)
		Chapter11<<array[index]<<" ";
		Chapter11<<endl<<endl;

//********************************************************************************
//D - Computes and outputs the sum & average of the last 6 integers in the array
	float sum = 0;
	float Avg;
	Chapter11<<"Sum and average of the last 6 integers in the array:"<<endl;
	for (int index = 4; index < 10; index++)
		sum = sum + array[index];
		Avg = sum / 6;
		Chapter11<<"Sum: "<<sum<<" Average: "<<Avg<<" ";
		Chapter11<<endl<<endl;
//********************************************************************************
//E - Finds and outputs the smallest integer in the array
	Chapter11<<"Smallest integer in the array is:"<<endl;
	smallest = array[0];
	for (int index = 0; index < 10; index++)
		if (array[index] < smallest)
			smallest = array[index];
	Chapter11<<smallest<<" ";
	Chapter11<<endl<<endl;
//********************************************************************************
//F - Finds and outputs the largest integer in the array
	Chapter11<<"Largest integer in the array is:"<<endl;
	largest = array[0];
	for (int index = 0; index < 10; index++)
		if (array[index] > largest)
			largest = array[index];
	Chapter11<<largest<<" ";
	Chapter11<<endl<<endl;
//*********************************************************************************
//G - Outputs the first 4 integers in the array on the same line in reverse order
	Chapter11<<"First 4 integers in the array in reverse order:"<<endl;
	for (int index = 3; index >= 0; index--)
		Chapter11<<array[index]<<" ";
		Chapter11<<endl<<endl;

//*********************************************************************************
//H - Sorts the integers in the array from smallest to greatest
	int array[] = {62,8,25,7,90,82,22,46,15,54};

	SelSort(array,10);

//*********************************************************************************
//I - Outputs the integers on the same line to confirm code segment H sorted correctly
	Chapter11<<"Sorted integers on the same line:"<<endl;
	for(int index = 0; index < 10; index++)
		Chapter11<<array[index]<<" ";
		Chapter11<<endl;
}
//**********************************************************************************

void SelSort(int data[],int length) //Sorts the integers
{
	int temp, minIndx;

	for(int passCount =0;passCount < length - 1;passCount++)
	{
		minIndx = passCount;

		for(int searchIndx = passCount + 1;searchIndx < length;searchIndx++)
			if(data[searchIndx] < data[minIndx])
				minIndx = searchIndx;

		temp = data[minIndx];
		data[minIndx] = data[passCount];
		data[passCount] = temp;
	}
}