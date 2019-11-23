// agill292_lab03_q1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	double num(0);
	//create loop to go through 1-30
	for (int i = 0; i <= 30; i++) {
		//if even number...
		if (i%2==0) {
			//add even to previous num value
			num = num + i;
		}

	}
	//display answer
	cout << "The sum of all even numbers from 2-30 inclusive is: " << num<<endl;
	system("PAUSE");
    return 0;
}

