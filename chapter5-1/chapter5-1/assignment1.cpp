//Ryan Murphy
//C Language
//Chapter 5 Assignment
//Assignment 1
//This program has the user input a letter and then tells the user the corresponding digit on the telephone keypad

#include <iostream>

using namespace std;

int main()
{
	char Letter;

	cout << "Enter a single letter, and I will tell you what the corresponding digit is on the telephone keypay" << endl; //Ask user to input letter
	cin >> Letter;	//User inputs letter

	if (Letter == 'A' || Letter == 'a' || Letter == 'B' || Letter == 'b' || Letter == 'C' || Letter == 'c')
	cout << "The digit 2 corresponds to the letter " << Letter << " on the telephone keypad." << endl;
	
	else if (Letter == 'D' || Letter == 'd' || Letter == 'E' || Letter == 'e' || Letter == 'F' || Letter == 'f')
	cout << "The digit 3 corresponds to the letter " << Letter << " on the telephone keypad." << endl;

	else if (Letter == 'G' || Letter == 'g' || Letter == 'H' || Letter == 'h' || Letter == 'I' || Letter == 'i')
	cout << "The digit 4 corresponds to the letter " << Letter << " on the telephone keypad." << endl;
	
	else if (Letter == 'J' || Letter == 'j' || Letter == 'K' || Letter == 'k' || Letter == 'L' || Letter == 'l')
	cout << "The digit 5 corresponds to the letter " << Letter << " on the telephone keypad." << endl;

	else if (Letter == 'M' || Letter == 'm' || Letter == 'N' || Letter == 'n' || Letter == 'O' || Letter == 'o')
	cout << "The digit 6 corresponds to the letter " << Letter << " on the telephone keypad." << endl;
	
	else if (Letter == 'P' || Letter == 'p' || Letter == 'R' || Letter == 'r' || Letter == 'S' || Letter == 's')
	cout << "The digit 7 corresponds to the letter " << Letter << " on the telephone keypad." << endl;
	
	else if (Letter == 'T' || Letter == 't' || Letter == 'U' || Letter == 'u' || Letter == 'V' || Letter == 'v')
	cout << "The digit 8 corresponds to the letter " << Letter << " on the telephone keypad." << endl;
	
	else if (Letter == 'W' || Letter == 'w' || Letter == 'X' || Letter == 'x' || Letter == 'Y' || Letter == 'y')
	cout << "The digit 9 corresponds to the letter " << Letter << " on the telephone keypad." << endl;
	
	else if (Letter != 'A' || Letter != 'a' || Letter != 'B' || Letter != 'b' || Letter != 'C' || Letter != 'c'||
		Letter != 'D' || Letter != 'd' || Letter != 'E' || Letter != 'e' || Letter != 'F' || Letter != 'f' ||
		Letter != 'G' || Letter != 'g' || Letter != 'H' || Letter != 'i' || Letter != 'J' || Letter != 'j'||
		Letter != 'K' || Letter != 'k' || Letter != 'L' || Letter != 'l' || Letter != 'M' || Letter != 'm' ||
		Letter != 'N' || Letter != 'n' || Letter != 'O' || Letter != 'o' || Letter != 'P' || Letter != 'p' ||
		Letter != 'R' || Letter != 'r' || Letter != 'S' || Letter != 's' || Letter != 'T' || Letter != 't' ||
		Letter != 'U' || Letter != 'u' || Letter != 'V' || Letter != 'v' || Letter != 'W' || Letter != 'w' ||
		Letter != 'X' || Letter != 'x' || Letter != 'Y' || Letter != 'y')
		cout << "There is no digit on the telephone keypad that corresponds to " << Letter << endl;

	return 0;


}

