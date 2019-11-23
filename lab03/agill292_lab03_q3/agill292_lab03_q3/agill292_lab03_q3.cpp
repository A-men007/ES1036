// agill292_lab03_q3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int result = 1;
	int number;
	cout << "Enter number to calculate its factorial: ";
	cin >> number;
	for (int x = 1; x <= abs(number); x++) {
		//multiply result by 1,2,3...n
		result = result * x;
	}
	cout << "the factorial is: " << result << endl;
	system("PAUSE");
	return 0;
}

