/*
ES1036b: Lab 02 Q2
Date : Oct 23, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : programs converts radian to degree, degree to radian, or exits the program when specified
*/
#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.141592653589793;
	while (true) {
		cout << "*******************************************\n************* Angle Converter *************\n*******************************************" << endl;
		cout << "1. Degrees to radians\n2. Radians to degrees\n3. Exit" << endl;

		// ask for int choice
		double a, rad, deg;
		cout << "Input an integer choice (1-3): " << endl;
		cin >> a;

		// Change angle from degrees to radians
		if (a == 1) {
			cout << "Input an angle in degree: " << endl;
			cin >> deg;
			cout << "The angle in radians is: " << deg * PI / 180 << " radians.\n" << endl;
		}
		// Change angle from radians to degrees
		else if (a == 2) {
			cout << "Input an angle in radians: " << endl;
			cin >> rad;
			cout << "The angle in degrees is: " << rad * 180 / PI << " degrees.\n" << endl;
		}

		// Exit
		else if (a == 3) {
			cout << "Goodbye!" << endl;
			break;
		}
		else {
			cout << "Invalid integer.";
		}
	}
	system("PAUSE");
	return 0;
}

