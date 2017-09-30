//Ryan Murphy
//C Language
//Chapter 6
//Assignment 2
//Thi program reads the input file and  finds the number of 3,4,5,6 letter worlds.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream QUOTES;			//Reads the input file
	ofstream NUMWORDS;

	int count;
	int count3 = 0;
	int count4 = 0;
	int count5 = 0;
	int count6 = 0;
	int sum;
	char inChar;

	NUMWORDS.open ("E:\\NUMWORDS.txt");//Creates the output file (Do not Close)
	QUOTES.open ("E:\\QUOTES.txt");

	while (QUOTES)
	{
		count = 0;
		QUOTES.get (inChar);	//Gets first character
		while (inChar >= 'A' && inChar <= 'Z' || inChar >= 'a' && inChar <= 'z')
		{
			QUOTES.get (inChar);	//Gets next character
			count++;
		}
		if (count == 3)		//Counts 3 letter words
			count3 ++;	
		else if (count == 4)	//Counts 4 letter words
			count4 ++;
		else if (count == 5)	//Counts 5 letter words
			count5++;
		else if (count == 6)	//Counts 6 letter words
			count6++;
	}
	cout<<"3 Letter words: " << count3 <<endl;			//Displays the number of 3 letter words to the screen
	NUMWORDS << "3 Letter words: " << count3 <<endl;	//Displays the number of 3 letter words on the output file
	cout<<"4 Letter words: " << count4 <<endl;
	NUMWORDS << "4 Letter words: " << count4 <<endl;
	cout<<"5 Letter words: " << count5 <<endl;
	NUMWORDS <<"5 Letter words: " << count5 <<endl;
	cout<<"6 Letter words: " << count6 <<endl;
	NUMWORDS << "6 Letter words: " << count6 <<endl;

	QUOTES.close();
	QUOTES.clear();

	return 0;
}