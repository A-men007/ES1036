/*
ES1036b: Lab 01 Q2
Date : Oct 2, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : Code converts normal letters into Caesar Cipher
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//initilize character variables
	char character,
	//use secondary variable to temporarily hold word
	newAscii;

	//Variable for Ascii value of word
	int ASCII;

	//tell user to enter a word
	cout << "Enter word that needs to be encoded: ";
	//save in variable space "word"
	cin >> character;

	//convert char to ASCII value and transfers it into another variabe type;
	ASCII = (int)character + 3;

	//convert int to char and transfer to new variable type
	newAscii = (char)ASCII;

	//display final answer
	cout << "the coded representation of the character is: " << newAscii << endl;

	system("PAUSE");

    return 0;
}// end main

