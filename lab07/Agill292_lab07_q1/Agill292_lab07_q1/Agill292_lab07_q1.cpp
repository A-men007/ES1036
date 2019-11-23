/*
ES1036b: Lab 07 Q1
Date : Nov 22, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program allows the user to input as many ints and output min max and avg
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//declare global vairbles for max min values
int Max(0), Min(0);

// function for bio
void printHeader(string name, int lab, string date, int question) {

	//print all bio info
	cout << name << endl;
	cout << "lab " << lab << endl;
	cout << date << endl;
	cout << "question " << question << endl;
}

//fucntion to obtain correct input
int fetchInteger() {
	//variable declaration
	string x;
	cout << "Enter an integer: ";
	//use getline()
	getline(cin, x);
	//create condition for positive ints
	for (unsigned int i = 0; i < x.size() || x.size() == 0; i++) {
		//if the int is either equal to 0 or 1 negative
		if (x.size() == 0 || (x.size() == 1 && x[i] == '-')) {
			cout << "Invalid entry! try again: ";
			getline(cin, x);
			i = -1;
		}
		//else if any other negative value
		else if (i == 0) {
			if (!((x[0] == '-') || x[0] >= '0' && x[0] <= '9')) {
				cout << "Invalid entry! try again: ";
				getline(cin, x);
				i = -1;
			}
		}//else if 
		else if (!(x[i] >= '0' && x[i] <= '9')) {
			cout << "Invalid entry! try again: ";
			getline(cin, x);
			i = -1;
		}

	}
	int k = atoi(x.c_str());
	
	static int Ma = k;
	static int Mi = k;
	if (Ma < k) {
		Ma = k;
	}
	if (Mi > k) {
		Mi = k;
	}
	Max = Ma;
	Min = Mi;

	return k;
}

//function to print values
void printResults(double sum, double average, int count, int Min, int Max) {

	cout << "The running average of 3 input(s) is: " << average << endl;
	cout << "Max value: " << Max << endl;
	cout << "Min value: " << Min << endl;

}

	int main() {
		//initalize variables 
		double sum(0), avg;
		int count(0), value;
		static int Ma, Mi;
		//call printheader
		printHeader("Amanpreet Gill", 7, "Nov 5, 2017", 1);
		while (fetchInteger != 0) {
			value = 0;
			//call integer function
			value = fetchInteger();
			sum += value;
			count++;
			avg = sum / count;
			printResults(sum, avg, count, Min, Max);
			//break is 0 is inputed 
			if (value == 0) {
				break;
			}
		}

		system("PAUSE");
	    return 0;
}