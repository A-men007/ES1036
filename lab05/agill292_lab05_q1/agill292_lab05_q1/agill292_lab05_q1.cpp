/*
ES1036b: Lab 05 Q1
Date : Nov 5, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program that turns inputed letter into opposite case 
*/

#include "stdafx.h"
#include <iostream>
using namespace std;
//function created for Uppercase conversion
char toUppercase(char lowercase) {
	//new variable for holding ascii value and converting back to char
	int ASCII;
	//convert lowercase to ascii and add by 32
	ASCII = (int)lowercase - 32;
	//convert new ascii back to char
	lowercase = (char)ASCII;
	//return uppercase value to "Opposite"
	return lowercase;
}
//function created for Lowercase conversion
char toLowercase(char uppercase) {
	//new variable for holding ascii value and converting back to char
	int ASCII;
	//convert lowercase to ascii and add by 32
	ASCII = (int)uppercase + 32;
	//convert new ascii back to char
	uppercase = (char)ASCII;
	//return Uppercase value to "Opposite"
	return uppercase;
}

int main()
{	//declare vriables
	char Letter, Opposite, c;
	bool z = true;
	cout << "********************************************\n*********** Letter Case Conversion **********\n********************************************" << endl;
	//while infinte loop for repeating code
	while (z) {

		do {//ask for input
			cout << "Please enter a single character (a-z, A-Z): ";
			cin >> Letter;
			//if statement for throwing error message
			if (!((Letter >= 'a' && Letter <= 'z') || (Letter >= 'A' && Letter <= 'Z'))) {
				cout << "Incorrect input. ";
			}

			//continue loop only until they have input the correct input
		} while (!((Letter >= 'a' && Letter <= 'z') || (Letter >= 'A' && Letter <= 'Z'))); {
		}
		//if statement for lowercase...
		if (Letter >= 'a' && Letter <= 'z') {
			//ste opposite to equal out of fn. toUpper()
			Opposite = toUppercase(Letter);
			cout << "The converted character is: " << Opposite << endl;
		}
		//else if for uppercase...
		else if (Letter >= 'A' && Letter <= 'Z') {
			Opposite = toLowercase(Letter);
			cout << "The converted character is: " << Opposite << endl;
		}
		cout << "Would you like to continue (y/n): ";
		cin >> c;
		while (c == 'n' || c == 'N') {
			cout << "Goodbye!";
			z = false;
			break;
		
		}

	}
	system("PAUSE");
	return 0;
}

