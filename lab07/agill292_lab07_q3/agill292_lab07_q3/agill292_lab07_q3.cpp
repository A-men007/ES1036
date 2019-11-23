/*
ES1036b: Lab 07 Q3
Date : Nov 27, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program swaps variables using pointers and triples the first value
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


double fetchRealNumber() {

	//variable declaration
	double x;
	cout << "Enter a real number: ";
	//use getline()
	cin >> x;
		if (!(x >= '0' || x <= '9')) {
			cout << "Invalid entry! try again: ";
			cin >> x;
		}
		/*else if (!(x >= '0' && x <= '9')) {
			cout << "Invalid entry! try again: ";
			cin >> x;
	}*/
	return x;
}

//function for increasing the first value by 3
void tripleRealNumber(double *num) {
	//times by 3
	*num = *num * 3;
}

//function for swapping values 
void swapRealNumbers(double *a, double *b) {
	double temp;
	//(1.7, 7)
	cout << "(" << *a << ", " << *b << ")" << endl;
	//perform swap
	temp = *a;
	*a = *b;
	*b = temp;
	//(7, 1.7)
	cout << "(" << *a << ", " << *b << ")" << endl;
}


int main()
{
	//declare variables
	double firstNum, secondNum;
	//give values to both doubles
	firstNum = fetchRealNumber();
	secondNum = fetchRealNumber();
	//set pointers as function parameters without creating variables
	swapRealNumbers(&firstNum, &secondNum);
	//give function pointer for firstNum (since it saves under the same variable)
	tripleRealNumber(&firstNum);
	//(7, 1.7)
	cout << "(" << firstNum << ", " << secondNum << ")" << endl;
	system("PAUSE");
    return 0;
}

