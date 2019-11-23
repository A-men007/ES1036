/*
ES1036b: Lab 06 Q3
Date : Nov 11, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program recieves and orders array from increasing to decreasing
*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//printheader function
void printHeader(string name, int lab, string date, int question) {
	//print all bio info
	cout << name << endl;
	cout << "lab" << lab << endl;
	cout << date << endl;
	cout << "question\n" << question << endl;
}

//display function
int displayMenu(int choice) {
	//run infinite loop for menu
	while (true) {
		//menu
		cout << "1.Sort Ascending \n2.Sort Decending \nEnter a choice: " ;
		cin >> choice;
		//throw error message 
		if (choice >= 1 && choice <= 2) {
			return choice;
		}
		else {
			cout << "Invalid integer." << endl;
		}
	}

}
//function for acending sort...
void sortAscending(int unsortedArray[], int size) {
	
	int Sort[10];
	int temp;

	//copy array
	for (int x = 0; x < size; x++) {
		Sort[x] = unsortedArray[x];
	}

	//sort array
	for (int i = 0; i < size; i++) {

		for (int j = i + 1; j < size; j++) {

			if (Sort[i] > Sort[j]) {

				temp = Sort[i];
				Sort[i] = Sort[j];
				Sort[j] = temp;
			}
		}
	}

	//print array
	cout << "Sorted Array: ";
	int d(1);
	for (int s = 0; s < size; s++)
	{
		cout << Sort[s] << ", ";
	}
	cout << "\nOriginal Array: ";
	for (int s = 0; s < size; s++)
	{
		cout << unsortedArray[s] << ", ";
	}
	cout << "\n";
}

void sortDescending(int unsortedArray[], int size) {
	int Sort[10];
	int temp;

	//copy array
	for (int x = 0; x < size; x++) {
		Sort[x] = unsortedArray[x];
	}

	//sort array
	for (int i = 0; i < size; i++) {

		for (int j = i+1; j < size; j++) {

			if (Sort[i] < Sort[j]) {

				temp = Sort[i];
				Sort[i] = Sort[j];
				Sort[j] = temp;
			}
		}
	}

	//print array
	cout << "Sorted Array: ";
	int d(1);
	for (int s = 0; s < size; s++)
	{
		cout << Sort[s] << ", ";
	}
	cout << "\nOriginal Array: ";
	for (int s = 0; s < size; s++)
	{
		cout << unsortedArray[s] << ", ";
	}
	cout << "\n";
}

int main() {
	//declare variables
	const int size(10);
	int num[10], choice(0), c(1);

	//run printheader function
	printHeader("Amanpreet Gill", 6, "Nov 11/2017", 3);
	//run menu function
	choice = displayMenu(choice);

	//loop to ask for int numbers
	for (int i = 0; i < size; i++) {
	
		cout << "Enter an integer number (" << c << "/10)" << ": ";
		cin >> num[i];
		c++;

	}

	switch (choice) {

	case 1:
		sortAscending(num, size);
		break;

	case 2:
		sortDescending(num, size);
		break;
	}
	system("PAUSE");
    return 0;
}

