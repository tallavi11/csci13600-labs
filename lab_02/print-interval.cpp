/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2A

Write a program print-interval.cpp that asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.
*/

#include <iostream>

using namespace std;

int main() {
	int L = 0;
	int U = 0;
	cout << "Please enter L: ";
	cin >> L;
	cout << "Please enter U: ";
	cin >> U;
	int i = L;
	cout << "\n";
	while (i < U) {
		cout << i << " ";
		i++;
	}
	cout << "\n";
return 0;}
