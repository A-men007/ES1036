/*
ES1036b: Lab 02 Q1
Date : Oct 4, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : Code uses algorithm to convert number grade into percentage grade
*/
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	//initalize variables for grades 1-4
	double gr1(0);

	//initialize counter variable
	int x(0);

	cout << "*************************** \n*                         *\n*  ES1036A-2017 Lab02 Q1  *\n*                         *\n*     Amanpreet Gill      *\n*                         *\n***************************" << endl;
	
	//making a loop for it to run 4 times
	for (x = 0; x < 5; x++) {

		//ask for grades
		cout << "\n Enter grade between 50 and 100" << endl;
		cin >> gr1;

		// For grades between 95-100
		if (gr1 > 94 && gr1 < 100) {
			cout << "The letter grade is A+" << endl;
		}
		//for 90-95
		else if (gr1 > 90 && gr1 < 95) {
			cout << "The letter grade is A" << endl;
		}
		//85-90
		else if (gr1 > 84 && gr1 < 90) {
			cout << "The letter grade is A-" << endl;
		}
		//80-85
		else if (gr1 > 79 && gr1 < 85) {
			cout << "The letter grade is B+" << endl;
		}
		//75-80
		else if (gr1 > 74 && gr1 < 80) {
			cout << "The letter grade is B" << endl;
		}
		//70-75
		else if (gr1 > 69 && gr1 < 75) {
			cout << "The letter grade is B-" << endl;
		}
		//65-70
		else if (gr1 > 64 && gr1 < 70) {
			cout << "The letter grade is C+" << endl;
		}
		//60-65
		else if (gr1 > 59 && gr1 < 65) {
			cout << "The letter grade is C" << endl;
		}
		//50-60
		else if (gr1 > 49 && gr1 < 60) {
			cout << "The letter grade is C-" << endl;
			//wipe variable
			gr1 = 0;
		}
	}
	system("PAUSE");

	return 0;
}
