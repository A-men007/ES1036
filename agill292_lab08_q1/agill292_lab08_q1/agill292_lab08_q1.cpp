/*
ES1036b: Lab 08 Q1
Date : Nov 27, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program creates a grade table with 5 coursesand 3 marks using 2d arrays
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//validator fuction
int getGrade() {
	
	string x;
	getline(cin, x);/*By default, x is a character array*/

	for (unsigned int i = 0; i<x.size() || x.size() == 0; i++) {
		//if string contains only one placeholder...
		if (i == 0) {
			//and the place holder isnt negative, or 0-9 then error
			if (!(x[0] >= '0' && x[0] <= '9'))
			{
				cout << "Invalid entry! try again: ";
				getline(cin, x);
				i = -1;
			}
		}
		//if any other value past first isnt 0-9
		else if (!(x[i] >= '0' && x[i] <= '9'))
		{
			cout << "Invalid entry! try again: ";
			getline(cin, x);
			i = -1;
		}
	}//c_str() converts a string to basic-character array

	 //converts to char array;
	int k = atoi(x.c_str());
	return k;
}

//grade table creator 
void inputGrades(double gradesTable[5][3]) {
	//populate 2d array
	//rows...
	for (int i = 0; i < 5; i++) {
		cout << "Enter the grades of course" << (i+1) << ":" << endl;
		//columns...
		for (int j = 0; j < 1; j++) {
			cout << "Assignment grade = ";
			gradesTable[i][j] = getGrade();
			cout << "Midterm grade = ";
			gradesTable[i][j+1] = getGrade();
			cout << "Final exam grade = ";
			gradesTable[i][j+2] = getGrade();
		}

	}

}

void convertToLetter(double gradesTable[5][3], string letterTable[5][3]) {
	//copy array in form of alphabet
	//rows...
	for (int i = 0; i < 5; i++) {
		cout << "Enter the grades of course" << (i + 1) << ":" << endl;
		//columns...
		for (int j = 0; j < 3; j++) {
			//ask for range validator, then assigns correct letter to given space
			if (gradesTable[i][j] > 94 && gradesTable[i][j] < 101) {
				letterTable[i][j] = "A+";
			}

			else if (gradesTable[i][j] > 89 && gradesTable[i][j] < 95) {
				letterTable[i][j] = "A ";
			}

			else if (gradesTable[i][j] > 84 && gradesTable[i][j] < 90) {
				letterTable[i][j] = "B+";
			}

			else if (gradesTable[i][j] > 79 && gradesTable[i][j] < 85) {
				letterTable[i][j] = "B ";
			}

			else if (gradesTable[i][j] > 69 && gradesTable[i][j] < 80) {
				letterTable[i][j] = "C ";
			}

			else if (gradesTable[i][j] < 70) {
				letterTable[i][j] = "F ";
			}
		}
	}

}

void printTable(string letterTable[5][3]) {
	//print arrays into tables
	cout << "Summary of grades:\n------------------"<<endl;
	cout << "Course 1 |" << letterTable[0][0] << "|" << letterTable[0][1] << "|" << letterTable[0][2] << "|" << endl;
	cout << "Course 2 |" << letterTable[1][0] << "|" << letterTable[1][1] << "|" << letterTable[1][2] << "|" << endl;
	cout << "Course 3 |" << letterTable[2][0] << "|" << letterTable[2][1] << "|" << letterTable[2][2] << "|" << endl;
	cout << "Course 4 |" << letterTable[3][0] << "|" << letterTable[3][1] << "|" << letterTable[3][2] << "|" << endl;
	cout << "Course 5 |" << letterTable[4][0] << "|" << letterTable[4][1] << "|" << letterTable[4][2] << "|" << endl;
	
}

double average(double gradesTable[5][3]) {
	double cavg(0), sum(0), aavg;
	//rows...
	for (int i = 0; i < 5; i++) {
		//wipe variable
		cavg = 0;
		//15%assignment +25%midterm+ 60%final
		cavg = (gradesTable[i][0] * 0.15) + (gradesTable[i][1] * 0.25) + (gradesTable[i][2] * 0.60);
		//add courses to sum
		sum = sum + cavg;
	}
	//do arithmatics
	aavg = sum / 5.00;
	//return value
	return aavg;
}

int main() {
	//declare arrays
	double Table[5][3];
	string Table2[5][3];

	//calls for functions...
	inputGrades(Table);

	convertToLetter(Table, Table2);

	printTable(Table2);

	cout << "The academic average is: " << average(Table) << endl;

	system("PAUSE");
    return 0;
}

