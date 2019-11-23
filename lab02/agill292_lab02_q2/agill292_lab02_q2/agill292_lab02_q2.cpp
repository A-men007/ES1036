/*
ES1036b: Lab 02 Q2
Date : Oct 4, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : program calculates average based on certain specifications
*/
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	//initalize variables for grades 1-4
	double gr1 = 0, gr2(0), gr3(0), gr4(0);

	//initalize variables for weighted avg 1-4
	double weight1 = 0, weight2(0), weight3(0), weight4(0);

	//initalize variable for final average
	double final(0);

	//initalize weight sum variable
	double weight(0);

	//dummy variable
	double x(0), y;
	//ask for grades and weights 

	cout << "*************************** \n*                         *\n*  ES1036A-2017 Lab02 Q2  *\n*                         *\n*     Amanpreet Gill      *\n*                         *\n***************************" << endl;

	//do while loop for grade 1 and weight 1
	do {
		//ask for grade
		cout << "Enter first grade" << endl;
		//store in dummy
		cin >> x;
		//set counter
		cout << "Enter first weightage" << endl;
		cin >> y;
		//if statement for this code is repeated
		if (x < 0 || x > 100) {
			//diplay incorrect
			cout << "Incorrect mark Input" << endl;
		}
		if (y<0.1 || y>0.9) {
			cout << "Incorrect weight Input" << endl;
		}
		//while these values are met, repeat code
	} while ((x < 0 || x > 100) && (y<0.1 || y>0.9)); {
		//if not met, set value into gr 1
		gr1 = x;
		weight1 = y;
	}


	//2nd grade and weight
	do {
		cout << "Enter second grade" << endl;
		cin >> x;
		cout << "Enter second weightage" << endl;
		cin >> y;
		if (x < 0 || x > 100) {
			cout << "Incorrect mark Input" << endl;
		}
		if (y<0.1 || y>0.9) {
			cout << "Incorrect weight Input" << endl;
		}
	} while ((x < 0 || x > 100) && (y<0 || y>0.9)); {
		gr2 = x;
		weight2 = y;
	}

	//3rd grade and weight
	do {
		cout << "Enter third grade" << endl;
		cin >> x;
		cout << "Enter third weightage" << endl;
		cin >> y;
		if (x < 0 || x > 100) {
			cout << "Incorrect mark Input" << endl;
		}
		if (y<0.1 || y>0.9) {
			cout << "Incorrect weight Input" << endl;
		}
	} while ((x < 0 || x > 100) && (y<0 || y>0.9)); {
		gr3 = x;
		weight3 = y;
	}

	//4th grade and weight
	do {
		cout << "Enter second grade" << endl;
		cin >> x;
		cout << "Enter second weightage" << endl;
		cin >> y;
		if (x < 0 || x > 100) {
			cout << "Incorrect mark Input" << endl;
		}
		if (y<0.1 || y>0.9) {
			cout << "Incorrect weight Input" << endl;
		}
	} while ((x < 0 || x > 100) && (y<0 || y>0.9)); {
		gr4 = x;
		weight4 = y;
	}


	//calculate average
	final = (gr1*weight1) + (gr2*weight2) + (gr3*weight3) + (gr4*weight4);

	cout << "the course grade is: " << final<<endl;

	system("PAUSE");

	return 0;
}