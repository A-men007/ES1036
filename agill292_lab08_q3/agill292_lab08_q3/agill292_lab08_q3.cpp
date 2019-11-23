/*
ES1036b: Lab 07 Q3
Date : Nov 27, 2017
Name: Amanpreet Gill
Student Number : 250964445
uwo: agill292@uwo.ca
Program’s mission : program creates simple employee database
*/

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;
//CLASS employee
class employee {

public:
	//declare variables (normal)
	string m_firstname, m_lastname;
	int m_ID;
	float m_salary;
	//CONSTRUCTOR
	employee() {
		m_firstname = "Anyname";
		m_lastname = "Anylastname";
		m_ID = 100;
		m_salary = 100;
	}

	void printinfo() {

	}
	//DESTRUCTOR prints when a place is deleted 
	~employee() {
		cout << "Employee dealocated" << endl;
	}

};

void dataEntry(employee database[], int size) {

	string x;
	int id;
	float s;

	for (int i = 0; i < size; i++) {
		cout << "Enter the first name for employee " << (i + 1) << ": ";
		cin >> x;
		//makes object hold the names
		database[i].m_firstname = x;
	
		cout << "Enter the last name for employee " <<( i+ 1) << ": ";
		cin >> x;
		//makes object hold the names
		database[i].m_lastname = x;

		cout << "Enter the ID for employee " << (i + 1) << ": ";
		cin >> id;
		//makes object hold the names
		database[i].m_ID = id;


		cout << "Enter the salary for employee " << (i + 1) << ": ";
		cin >> s;
		//makes object hold the names
		database[i].m_salary = s;
	}

}

void printArray(employee *myArray, int size) {
	cout << "Employee Listing:\nLast         First         ID         Salary" << "\n----------------------------------------" << endl;
	for (int i = 0; i < size; i++) {
		cout << myArray[i].m_firstname << "     " << myArray[i].m_lastname << "     " << myArray[i].m_ID << "     " << myArray[i].m_salary << endl;	
	}
	cout << "\n----------------------------------------" << endl;
}

int main() {

	int num;

	cout << "Enter number of employees in the database: ";
	cin >> num;
	//create pointer of arrays so u can change them instead of created a new object
	employee *database = new employee[num]();

	dataEntry(database, num);

	printArray(database, num);
	
	delete[] database;

	system("PAUSE");
    return 0;
}

