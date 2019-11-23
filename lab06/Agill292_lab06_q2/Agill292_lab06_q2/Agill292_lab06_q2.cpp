/*
ES1036b: Lab 06 Q2
Date : Nov 11, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program calculates a weighted grade of 4 assignments using functions and arrays (similar to lab2 q2)
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

bool isValidGrade (double grade) {
	bool x;
	//if statement for this code is repeated
	if (grade < 0 || grade > 100) {
		x = false;
	}
	else {
		x = true;
	}
	return x;
}
//function to validate correct weight
bool isValidWeight(double weight) {
	bool y;
	if (weight < 0.1 || weight > 0.9){
		y = false;
	}else {
		y = true;
	}
	return y;
}
int main() {
	//declare variables in main
	double grades[4];
	double weight[4];
	int x = 0;
	double final;

	cout << "******************************************************\n*                ES1036A-2017 Lab06 Q1               *\n*                  Amanpreet Gill                    *\n******************************************************" << endl;

 do {
	 x++;
	 if (x==2) {
		 cout << "weightage does not add up to 1. please re-do" << endl;
	 }
	for (int i = 0; i < 4; i++) {
		//ask and store grade
		cout << "Enter grade: ";
		cin >> grades[i];

		//ask and store weight
		cout << "Enter weight: ";
		cin >> weight[i];

		//fix incorrect grades
		while (isValidGrade(grades[i]) == false) {
			cout << "Invalid grade! re-enter grade: ";
			cin >> grades[i];
		}
		//fix incorrect weight
		while (isValidWeight(weight[i]) == false) {
			cout << "Invalid weight! re-enter weight: ";
			cin >> weight[i];
		}
	}
 } while (!((weight[0] + weight[1] + weight[2] + weight[3]) == 1)); {
	 //calculate average
	 final = (grades[0]*weight[0]) + (grades[1]*weight[1]) + (grades[2]*weight[2]) + (grades[3]*weight[3]);

	 cout << "the course grade is: " << final << endl;
 }
	system("PAUSE");
	return 0;
}

