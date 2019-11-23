/*
ES1036b: Lab 05 Q2
Date : Nov 5, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program displays menu and performs 4 types of conversions 
*/

#include "stdafx.h"
#include <iostream>
#include <string>;
using namespace std;
//header function
void printHeader(string name, int lab, string date, int question) {
	//print all bio info
	cout << name << endl;
	cout <<"lab" << lab << endl;
	cout << date << endl;
	cout << "question\n" << question << endl;
}
//display function
int displayMenu(int choice) {
	while (true) {
		cout << "1. Celsius -> Fahrenheit\n2. Centimeters -> Inches\n3. Meters -> Feet\n4. Km/h -> MPH\n5. Exit program\nEnter the integer option you want: " << endl;
		cin >> choice;

		if (choice >= 1 && choice <= 5){
			return choice;
		}
		else {
			cout << "Invalid integer." << endl;
		}
	}

}
//celsius to fahrenheit function
float computeCelsiusConversion(float degreesCelsius) {
	float F;
	//do arithmatics
	F = 9 * degreesCelsius / 5 + 32;
	//return result
	return F;
}
//centimeter to inches function
float computeCentimetersConversion(float centimeters) {
	float F;
	F = 0.39*centimeters;
	return F;
}
//meters to feet function
double computeMetersConversion(double meters) {
	float F;
	F = 3.28*meters;
	return F;
}
//kilometersperhour to milesperhour function
double computeKilometersPerHourConversion(double kilometersPerHour) {
	float F;
	F = kilometersPerHour / 1.609;
	return F;
}
//exit function
void printFooter() {
	cout << "------------------------------\n	Goodbye!	\n------------------------------" << endl;

}

int main() {
	int c(0), cel, cm, m, kmh;
	bool x = true;
	//defers to printHeader fn
	printHeader("Amanpreet Gill", 5, "Nov 5/2017", 2);
	while (x) {
		//defers to displayMenu fn
		c = displayMenu(c);
		//switch for handling conversions
		switch (c) {

		case 1:
			cout << "Celsius>>Fahrenheit converter" << endl;
			//ask user for value in celsius
			cout << "Enter a Celsius value: ";
			//store in cel
			cin >> cel;
			cel = computeCelsiusConversion(cel);

			//display final answer in fahrenheit
			cout << "The converted value is " << cel << " Fahrenheit" << endl;
			break;
		case 2:
			cout << "Centimeters>>Inches converter" << endl;
			cout << "Enter a Centimeter value: ";
			cin >> cm;
			cm = computeCentimetersConversion(cm);

			cout << "The converted value is " << cm << " inches" << endl;
			break;
		case 3:
			cout << "Meters>>Feet converter" << endl;
			cout << "Enter a Meter value: ";
			cin >> m;
			m = computeMetersConversion(m);

			cout << "The converted value is " << m << " ft" << endl;
			break;
		case 4:
			cout << "Kmh>>Mph converter" << endl;
			cout << "Enter a Km/h value: ";
			cin >> kmh;
			kmh = computeKilometersPerHourConversion(kmh);

			cout << "The converted value is " << kmh << " MPH" << endl;
			break;

		case 5:
			printFooter();
			x = false;
			break;
		}
	
	}
	system("PAUSE");
	return 0;
}

