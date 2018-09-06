/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2A

Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.
*/
#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	cout << "please enter an integer: ";
	cin >> n;
	while (n <= 0 || n >= 100)
	{
		cout << "please re-enter: ";
		cin >> n;
	}
	cout << "Number squared is " << n * n << "\n";
return 0;
}
