/*
ES1036b: Lab 02 Q3
Date : Oct 13, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : Code converts normal letters into Caesar Cipher
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//initilize variables that will be needed
	char character, temp, x;
	//Variable to hold Ascii value of letter
	int ASCII;

	//ask for letter
	cout << "Enter letter that needs to be encoded: ";
	//place in dummy variable
	cin >> character;
	//If the letter entered is x,y,z (lowercase or upper) then continue with seperate sections
	if (character == 'x') {
		cout << "the coded representation of the character is: a" << endl;
	}
	else if (character == 'X') {
		cout << "the coded representation of the character is: A" << endl;
	}
	else if (character == 'y') {
		cout << "the coded representation of the character is: b" << endl;
	}
	else if (character == 'Y') {
		cout << "the coded representation of the character is: B" << endl;
	}
	else if (character == 'z') {
		cout << "the coded representation of the character is: c" << endl;
	}
	else if (character == 'Z') {
		cout << "the coded representation of the character is: C" << endl;
	}
	//if letter is an acceptable value (a-w), then place it in variable 'character' to be converted
	else {

		//turn character into ascii and simutaneously shift to 3 letters to the right
		ASCII = (int)character + 3;

		//convert ascii value back to character value and store it in temp variable
		temp = (char)ASCII;

		//display final answer
		cout << "the coded representation of the character is: " << temp << endl;

	}

	//If statement to sort out if letter entered was uppercase or not
	if (isupper(character)) {
		cout << "ascii range is 65 - 90" << endl;
	}
	else {
		cout << "ascii range is 97 - 122" << endl;
	}

	system("PAUSE");
	return 0;
}