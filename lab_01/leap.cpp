/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1B

Write a program leap.cpp that asks the user to input an integer representing a year number (1999, 2016, etc.). If the input year is a leap year according to the modern Gregorian calendar, it should print Leap year, otherwise, print Common year.
*/
#include <iostream>

using namespace std;

int main() {
	int year = 0;
	cout << "Enter year: ";
	cin >> year;
	if (year % 4 == 0) {
	cout << "\nLeap Year" << endl;
	} else {
	cout << "\nCommon Year" << endl;
	}
return 0;}
