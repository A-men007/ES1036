/*
ES1036b: Lab 05 Q3
Date : Nov 5, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program presents user with option to corresponding to mathematical computations
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void printHeader(string name, int lab, string date, int question) {
	//print all bio info
	cout << name << endl;
	cout << "lab " << lab << endl;
	cout << date << endl;
	cout << "question " << question << endl;
}

char displayMenu(char choice) {
	while (true) {
		//output menu
		cout << "a.Power Function\nb.Sine Function\nc.Exponential Function\nd.Factorial Function\ne.Square Root Function\nf.Exit\nEnter your choice letter: " << endl;
		//store input in 'choice'
		cin >> choice;
		//set all values to lowercase to allow for easy access into switch statement
		choice = tolower(choice);
		//if else statment to catch invalid inputs
		if (choice >= 'a' && choice <= 'f') {
			return choice;
		}
		else {
			cout << "Invalid integer." << endl;
		}
	}
}

//power function
double computePower(double base, int exponent) {
	double result = 1;

	if (exponent == 0) {
		result = 1;
	}

	//if the power is negative
	else if (exponent == -abs(exponent)) {
		//set conditions to find the postive exponent value 
		for (int y = 0; y < abs(exponent); y++) {
			//1/5*5*5.....abs(pwr)
			result = result * base;
		}
		//convert to reciprocal to get the final value
		result = 1 / result;
	}//if power is positive

	else {
		//counting loop form 1-pwr
		for (int y = 0; y < exponent; y++) {
			result = result * base;
		}
	}
	return result;
}

//factorial function
double computeFactorial(int number) {
	double result = 1;
	for (int y = 1; y <= abs(number); y++) {
		result = result * y;
	}
	return result;
}

//exponential function
double computeExponential(double exponential, int numberOfIterations) {
	double all = 0, top, bottom;
	for (int n = 0; n <= numberOfIterations; n++) {
		top = 1;
		//power
		top = computePower(exponential, n);

		bottom = 1;
		//factorial
		bottom = computeFactorial(n);


		all += (top / bottom);
	}
	return all;
}

//sine function
double computeSine(double radians, int numberOfIterations) {
	double result = 0;

	for (int i = 0; i < numberOfIterations; i++) {
		result = result + (computePower(-1, i)*computePower(radians, 2 * i + 1)) / computeFactorial(2 * i + 1);
	}
	return result;
}

double computeSquareRoot(double number) {
	double nextguess(1), lastguess(1);
	do {
		nextguess = lastguess;
		nextguess = (number / lastguess + lastguess) / 2;
	} while (lastguess != nextguess); 
		return nextguess;
}

//exit function
void printFooter() {
	cout << "------------------------------\n	Goodbye!	\n------------------------------" << endl;

}

int main() {
	//declare variables
	char menu = NULL;
	int  pwr, factorial;
	double rad(0), result, all, base, exponent;
	bool x = true;
	//set bio
	printHeader("Amanpreet Gill", 5, "Nov 5, 2017", 3);
	while (x) {
		menu = displayMenu(menu);

		switch (menu) {

		case 'a':
			cout << "Enter a base value: " << endl;
			cin >> base;
			cout << "Enter a power value: " << endl;
			cin >> pwr;
			result = computePower(base, pwr);
			cout << "the result of the power is " << result << endl;
			break;

		case 'b':
			cout << "Enter number in radians" << endl;
			cin >> rad;
			cout << "Enter value of iteration" << endl;
			cin >> pwr;
			result = computeSine(rad, pwr);

			cout << "The result of sin is " << result << endl;
			break;

		case 'c':
			cout << "Enter value for the exponential" << endl;
			cin >> exponent;
			cout << "Enter value of iteration " << endl;
			cin >> pwr;
			all = computeExponential(exponent, pwr);

			cout << "The result of the exponential is " << all << endl;
			break;

		case 'd':
			do {
				cout << "enter a factorial integer: ";
				cin >> factorial;

				if (factorial == -abs(factorial)) {
					cout << "Please enter positive integer" << endl;
				}
			} while (factorial == -abs(factorial));
			result = computeFactorial(factorial);

			cout << "the result of the factorial is " << result << endl;
			break;

		case 'e':

			cout << "Please input a positive number: " << endl;
			cin >> result;
			
			cout << "The result is: " << computeSquareRoot(result) << endl;
			break;

		case 'f':
			printFooter();
			x = false;
			break;
		}
	}
	system("PAUSE");
	return 0;
}

