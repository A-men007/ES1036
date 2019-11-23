/*
ES1036b: Lab 04 Q1
Date : Oct 27, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : programs has a menu of options for converting different metric to imperials
*/
#include "stdafx.h";
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	//declare variables 
	int choice(0), i;;
	double cel, cm, m, kmh, F;

	cout << "----------------------------\n--METRIC TO IMPERIAL--\n----------------------------" << endl;
	//create menu output
	cout << "1. Celsius -> Fahrenheit\n2. Centimeters -> Inches\n3. Meters -> Feet\n4. Km/h -> MPH\n5. Exit program" << endl;
	//ask for user output
	cout << "Enter the integer option you want: " << endl;
	//store in variable choice
	cin >> choice;
	//create loop to repeat code if needed
	for (i = 0; i <= 0; ++i){
		//switch works off variable 'choice'
		switch (choice) {
		//case if 1 is selected
		case 1:
			cout << "Celsius>>Fahrenheit converter" << endl;
			//ask user for value in celsius
			cout << "Enter a Celsius value: ";
			//store in cel
			cin >> cel;
			//do arithmatics
			F = 9 * cel / 5 + 32;
			//display final answer in fahrenheit
			cout << "The converted value is " << F << " Fahrenheit" << endl;
			//break the switch 
			break;
		//case for 2nd option
		case 2:
			cout << "Centimeters>>Inches converter" << endl;
			cout << "Enter a Centimeter value: ";
			cin >> cm;
			F = 0.39*cm;
			cout << "The converted value is " << F << " inches" << endl;
			break;
		//case for 3rd option
		case 3:
			cout << "Meters>>Feet converter" << endl;
			cout << "Enter a Meter value: ";
			cin >> m;
			F = 3.28*m;
			cout << "The converted value is " << F << " ft" << endl;
			break;
		//case for 4th option
		case 4:
			cout << "Kmh>>Mph converter" << endl;
			cout << "Enter a Km/h value: ";
			cin >> kmh;
			F = kmh / 1.609;
			cout << "The converted value is " << F << " MPH" << endl;
			break;
		//case for 5th option
		case 5:
			cout << "You have exited the program" << endl;
			break;
		//if any other value is input
		default:
			cout << "Please choose a integer between 1 and 5" << endl;
			cin >> choice;
			i--;
			break;

		}//end switch
	}//end for loop
	system("PAUSE");


	return 0;
}//end main