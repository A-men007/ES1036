/*
ES1036b: Lab 01 Q1
Date : Oct 2, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : Code uses algorithm to calculate average in a course
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

	//ask for grades and weights
	cout << "Enter first grade" << endl;
	cin >> gr1;

	cout << "Enter first weightage" << endl;
	cin >> weight1;

	cout << "Enter second grade" << endl;
	cin >> gr2;

	cout << "Enter second weightage" << endl;
	cin >> weight2;

	cout << "Enter third grade" << endl;
	cin >> gr3;

	cout << "Enter third weightage" << endl;
	cin >> weight3;

	cout << "Enter fourth grade" << endl;
	cin >> gr4;

	cout << "Enter fourth weightage" << endl;
	cin >> weight4;

	//calculate average
	final = (gr1*weight1) + (gr2*weight2) + (gr3*weight3) + (gr4*weight4);

	//add up weightage
	weight = weight1 + weight2 + weight3 + weight4;

	//if final average is within 100%, then it works
	if (weight == 1) {
		cout << "the course grade is: " << final;
	}
	else {
		cout << "marks invalid ";
	}

	system("PAUSE");

	return 0;
}