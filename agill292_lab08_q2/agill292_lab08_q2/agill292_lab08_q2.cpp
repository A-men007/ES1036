/*
ES1036b: Lab 08 Q2
Date : Nov 27, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : Use an array of pointers to reference a set of three double type arrays, which will represent three different engineering courses.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void populateAndFindAverage(double marks[3], double &avg, int size)
{
	int x = 0;
	int size2 = 0;
	double sum = 0;
	char choice = 'y';

	for (int i = 0; i < size; i++) {
		cout << "Enter grade for student " << i + 1 << ": ";
		cin >> marks[i];
		sum += marks[i];
	}
	cout << "Have all students been added (y/n)?: ";
	cin >> choice;
	if (choice == 'n')
	{
		cout << "How many students do you wish to add?: ";
		cin >> size2;
		double *newMarks[3];
		newMarks[x] = new double[size + size2];
		for (int z = 0; z < size; z++)
		{
			newMarks[x][z] = marks[z];
		}
		delete[x] marks;

		for (int i = 0; i < size2; i++)
		{
			cout << "Enter grade for student " << i + 1 + size << ": ";
			cin >> newMarks[x][i];
			sum += newMarks[x][i];
		}
		avg = sum / (size2 + size);
	}
	else
	{
		avg = sum / size;
	}
	cout << "Class average: " << avg << endl;
	cout << endl;
	x++;
}


int main(){
	//declare variables 
	int size, courseMax, courseMin;
	double *p[3], max, min;
	string courses[3] = { "ES1036", "ES1050", "ES1021" };
	double cAvg[3];
	//give description
	cout << "This program finds the class average of 3 courses\nand compare those averages\nThe courses are : ES1036, ES1050 and ES1021" << endl;
	//loop gives class size for each class
	for (int i = 0; i < 3; i++) {
		cout << "Enter the class size for " << courses[i] << ": ";
		cin >> size;
		//***
		p[i] = new double[size];
		populateAndFindAverage(p[i], cAvg[i], size);
	}
	//set equal to first places to begin comparing
	max = cAvg[0];
	min = cAvg[0];
	courseMax = 0;
	courseMin = 0;

	for (int i = 1; i < 3; i++)
	{
		//if the mark in i place is bigger than 'max', then replace
		if (cAvg[i] > max)
		{
			max = cAvg[i];
			courseMax = i;
		}
		if (cAvg[i] < min)
		{
			min = cAvg[i];
			courseMin = i;
		}
	}
	cout << courses[courseMax] << " course has the highest average." << endl;
	cout << courses[courseMin] << " course has the lowest average." << endl;
	return 0;
}

