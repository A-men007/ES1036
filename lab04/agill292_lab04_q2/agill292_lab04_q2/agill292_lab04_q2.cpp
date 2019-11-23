/*
ES1036b: Lab 04 Q2
Date : Oct 27, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : programs runs a math calculator for some operations.....
*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//declare variabales
	char choice;
	double base, result, result1, result2, result3, result4, exponent, rad, sin, power, all, top, bottom;
	int pwr, factorial, y;

	do {
		cout << "----------------------------\n-------Math Calculator------\n----------------------------" << endl;
		//output menu
		cout << "a.Power Function\nb.Sine Function\nc.Exponential Function\nd.Factorial Function\ne.Exit\nEnter your choice letter: " << endl;
		//store input in 'choice'
		cin >> choice;
		//set all values to lowercase to allow for easy access into switch statement
		choice = tolower(choice);

		//switch depends on 'choice'
		switch (choice) {

		case 'a': //x^2
			//ask for inputs
			cout << "Enter a base value" << endl;
			cin >> base;
			cout << "Enter a power" << endl;
			cin >> pwr;
			//set result to equal 1
			result = 1;
			if (pwr==0) {
				result = 0;
			}
			//if the power is negative
			else if (pwr == -abs(pwr)) {
				//set conditions to find the postive exponent value 
				for (y = 1; y <= abs(pwr); y++) {
					//1*5*5*5.....abs(pwr)
					result = result * base;
				}
				//convert to reciprocal to get the final value
				result = 1 / result;
			}//if power is positive
			else {
				//counting loop form 1-pwr
				for (y = 1; y <= pwr;y++) {
					result = result * base;
					}
			}
			cout << "the result is " << result << endl;
			break;

		case 'b': //sinx
			cout << "Enter number in radians" << endl;
			cin >> rad;
			cout << "Enter value of iteration" << endl;
			cin >> pwr;
			result = 0;

			//total calculations
			for (y = 0; y <= pwr; y++) {

				result1 = 1;
				//power
				for (int i = 1; i <= y; i++) {
					result1 = result1 * (-1);
				}

				result2 = 1;
				//second power
				for (int i = 1; i <= (2 * y + 1); i++) {
					result2 = result2 * rad;
				}

				result3 = 1;
				//factorial
				for (int n = 1; n <= (2 * y + 1); n++) {
					result3 = result3 * n;
				}
				result = result + ((result1 * result2) / result3);

			}
			cout << "The result of sin is " <<result << endl ;
			break;

		case 'c': //2^x exponential
			// total: all top:top bottom: bottom
			all = 0;
			cout << "Enter value for the exponential" << endl;
			cin >> exponent;
			cout << "Enter value of iteration " << endl; 
			cin >> base;
			for (int n = 0; n <= base; n++) {
				top = 1;
				//power
				for (y = 1; y <= n; y++) {
					top = top * exponent;
				}
				bottom = 1;
				//factorial
				for (int i = 1; i <= n; i++) {
					bottom = bottom * i;
				}

				all = all + (top / bottom);
			}
			cout << "The result of the exponential is " << all << endl;
			break;

		//case d for factorials.
		case 'd': //5!
			result = 1;
			do {
				cout << "enter a factorial integer: ";
				cin >> factorial;

				if (factorial == -abs(factorial)) {
					cout << "Please enter positive integer" << endl;
				}
			} while (factorial == -abs(factorial)); {

					for (y = 1; y <= abs(factorial); y++) {
						result = result * y;
				}
					cout << "the result of the factorial is " << result << endl;
			}
			break;

		case 'e':
			break;

			//if choice is outside specified range
		default:
			cout << "Invalid input! Please try again: " << endl;
			break;

		}
		//for exiting menu
	} while (choice != 'e');

	cout << "Goodbye!" << endl;

	system("PAUSE");
	return 0;
}