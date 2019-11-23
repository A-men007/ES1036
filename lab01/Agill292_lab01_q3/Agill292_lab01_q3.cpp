/*
ES1036b: Lab 01 Q3
Date : Oct 2, 2017
Name: Amanpreet Gill
Student Number : 250964445
Program’s mission : Use distance and 
*/

#include <cmath>
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	//initalize distance and time
	double distance, time;

	//ask for height for calculations
	cout << "Please enter height in meters: " << endl;
	cin >> distance;

	/*formula:
	d=vt+1/2at^2
	d=.5at^2
	sqrt(2d/a)=t
	*/
	//solve for time
	time = sqrt((2 * distance) / 9.81);
	//display the time it took to hit the ground
	cout << "The object took " << time << " seconds to hit the ground." << endl;
 
	system("PAUSE");

    return 0;
}

