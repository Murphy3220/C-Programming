//Ryan Murphy
//C Language
//Chapter 11
//Assignment 2
//This assignment reads data from an input file and puts the data into a 
//two dimension array, and then outputs the report.

#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

//The ComputeSum function will compute the sums of the rows and columns
void ComputeSum (int FishArray [][4], int rowsum[],int colsum[]);
//The ComputeAvg function will compute the averages of the rows and columns
void ComputeAvg (int rowsum[],int colsum[],double rowavg[], double colavg[]);

ifstream DataFile3;
ofstream FishFile;



void main()
{
	int row,column;
	double rowavg[6],colavg[4]; 
	int rowsum[6], colsum[4];
	int FishArray[6][4]; //Declared Array
	DataFile3.open ("F:\\DataFile3.txt"); //Opens input file
	FishFile.open ("F:\\FishFile.txt");  //Opens output file
//Code Segment B*************************************************************
	for (row = 0; row < 6; row++)
		for (column = 0; column < 4; column++)
			DataFile3>>FishArray[row][column];
//Main***********************************************************************
//Calls the ComputeSum & ComputeAvg functions to Main
	ComputeSum (FishArray, rowsum, colsum);
	ComputeAvg (rowsum, colsum, rowavg, colavg);
//Code Segment E*************************************************************
//Outputs the report
	cout<<"           ";
	FishFile<<"           ";
	for (column = 0; column < 4; column++)
	{
		cout<<" Fish"<<column +1<<"  ";
		FishFile<<" Fish"<<column +1<<"  ";
	}
	cout<<"  Average"<<endl;
	FishFile<<"  Average"<<endl;
	for (row = 0; row < 6; row++)
	{
		cout<<"Lake "<<row + 1<<" ";
		FishFile<<"Lake "<<row + 1<<" ";

		for (column = 0; column < 4; column++)
		{
			cout<<setw(8)<<FishArray[row][column];
			FishFile<<setw(8)<<FishArray[row][column];
		}
		cout<<setw(12)<<rowavg[row]<<endl<<endl;
		FishFile<<setw(12)<<rowavg[row]<<endl<<endl;
	}
	cout<<"Average   ";
	FishFile<<"Average   ";
	for (column = 0; column < 4; column++)
	{
		cout<<setw(6)<<colavg[column]<<"  ";
		FishFile<<setw(6)<<colavg[column]<<"  ";
	}
	cout<<endl<<endl;
}

//Code Segment C*************************************************************
//Computes the sum of the rows and columns
void ComputeSum (int FishArray[][4], int rowsum[], int colsum[])
{
	int row,column;

	for (row=0; row < 6; row++)
		rowsum[row]=0;
	for (row=0; row < 6; row++)
		for (column = 0; column < 4; column++)
			rowsum[row] = rowsum[row] + FishArray[row][column];
	
	for (column = 0; column < 4; column++)
		colsum[column] = 0;
	for (column = 0; column < 4; column++)
		for (row = 0; row < 6; row++)
			colsum[column] = colsum[column] + FishArray[row][column];
}
//Code Segment D**************************************************************
//Computes the average of the rows and columns
void ComputeAvg (int rowsum[],int colsum[],double rowavg[], double colavg[])
{
	int row,column;

	for (row=0; row < 6; row++)
		for (column = 0; column < 4; column++)
			rowavg[row]= rowsum[row] / 6.0;

	for (column = 0; column < 4; column++)
		for (row = 0; row < 6; row++)
			colavg[column] = colsum[column] / 4.0;
}