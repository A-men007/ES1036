/*
ES1036b: Lab 06 Q1
Date : Nov 10, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program that rolls 0, 1, or 2 dice at a time to reach a total dice value of 50
*/

#include "stdafx.h"
#include <cmath>
#include <iostream>
using namespace std;

//function rolldice
int rollDice(int numberOfDice) {
	//initialize variables 
	int value, current;
	static int x (0);
	static int total(0);
	current = 0;
	//for loop to handle simulations for dice 
	for (int i = 1; i <= numberOfDice; i++) {
		value = 0;
		value = 1 + rand() % 6;
		x++;
		current = current + value;
		total = total + value;
	}
	//print total dice rolls and current roll
	cout << "Total number of dice rolled so far: " << x << endl;
	cout << "The result of the current roll is: " << current << "\n" << endl;
	return total;
}
//main function
int main()
{//inistialize variables
	int results(0);
	int dice(0);
	while (results <= 50) {
		do {
			//tell goal and ask for dice numbers
			cout << "The goal is a score of: 50" << endl;
			cout << "Your current running score is: " << results << endl;
			cout << "How many dice would you like to roll (0,1,2): ";
			cin >> dice;
			//only accepts any 3 options are specified 
		} while ((dice != 0) && (dice != 1) && (dice != 2));
		//call function
		results = rollDice(dice);
		if (dice == 0) {
			break;
		}
	}
	//show final result or give out of bounds message
	if (results <= 50) {
		cout <<  "Game Over! \nYour score was: " << results << endl;
	}
	else {
		cout << "You rolled too many times!" << endl;
	}
	system("PAUSE");
	return 0;
}



