//Ryan Murphy
//C Language
//Chapter 7
//Assignment 1
//This program uses the "switch" statement to display corresponding digits on the telephone pad

#include <iostream>

using namespace std;

int main()
{
	char Letter;

	do
	{

	cout<<"This program finds the corresponding digit on the telephone pad."<<endl;
	cout<<"Type Q to exit" <<endl<<endl;
	cout <<"Enter a single letter:" <<endl;
	cin >> Letter;

	switch (Letter)
	{
		case 'A':
		case 'a':
		case 'B':
		case 'b':
		case 'C':
		case 'c': cout <<"The Digit 2 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'D':
		case 'd':
		case 'E':
		case 'e':
		case 'F':
		case 'f': cout <<"The digit 3 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'G':
		case 'g':
		case 'H':
		case 'h':
		case 'I':
		case 'i': cout <<"The digit 4 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'J':
		case 'j':
		case 'K':
		case 'k':
		case 'L':
		case 'l': cout <<"The digit 5 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'M':
		case 'm':
		case 'N':
		case 'n':
		case 'O':
		case 'o': cout <<"The digit 6 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'P':
		case 'p':
		case 'R':
		case 'r':
		case 'S':
		case 's': cout <<"The digit 7 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'T':
		case 't':
		case 'U':
		case 'u':
		case 'V':
		case 'v': cout <<"The digit 8 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'W':
		case 'w':
		case 'X':
		case 'x':
		case 'Y':
		case 'y': cout <<"The digit 9 corresponds to the letter "<< Letter <<endl<<endl;
			break;
		case 'Q':
		case 'q': cout <<"The program will now exit"<< endl;
			break;
		default : cout <<"There is no digit on the telephone pad that corresponds to "<< Letter <<endl<<endl;
			break;
	}
	} while (Letter != 'Q' && Letter != 'q');

	return 0;
}

