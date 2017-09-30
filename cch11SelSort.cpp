//C Programming								cch11SelSort.cpp
//Chapter 11
//This program contains a function that sorts an array of integers

#include <iostream>
using namespace std;

void SelSort(int data[],int length);


void main()
{
	int array[] = {34,87,17,53,44,9};


	SelSort(array,6);

	for(int index=0;index<6;index++)
		cout<<array[index]<<"  ";


}




void SelSort(int data[],int length)
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

