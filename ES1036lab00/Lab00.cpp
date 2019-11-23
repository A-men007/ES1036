/* ---------Arithmetic_Operations_lab0.cpp
   This program shows some simple arithmetic operations-------*/
//Amanpreet Gill, 250964445, 1036A, agill292@uwo.ca
#include <iostream>
using namespace std;

int main()
{
	double x1 = 0, y1(0), x2(0), y2 = 0,  // declare and initialize variable
		side1 = 0, side2 = 0, distance = 0;
  

   cout << "Enter variable for x1: ";  // prompt; "\n" represents a new line
   cin >> x1;                          // read an integer

   cout << "Enter variable for y1: ";  // prompt; "\n" represents a new line
   cin >> y1;                          // read an integer

   cout << "Enter variable for x2: ";  // prompt; "\n" represents a new line
   cin >> x2;                          // read an integer

   cout << "Enter variable for y2: ";  // prompt; "\n" represents a new line
   cin >> y2;                          // read an integer

   //compute the sides of the triangle
   side1 = x2 - x1;
   side2 = y2 - y1;
   //calculate distance
   distance = sqrt(side1*side1 + pow(side2, 2.0));

   //print the distnce
   cout << "The distance between points (" << x1 << ',' << y1 << ") and (" << x2 << ',' << y2 << ") is " << distance << endl;
   system("PAUSE");
   return 0;   // indicate that the program ended successfull
} // end function main
