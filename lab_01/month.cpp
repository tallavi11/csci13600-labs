/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1B

Write a program month.cpp that asks the user to input the year and the month (1-12) and prints the number of days in that month (taking into account leap years). You may not use switch case or arrays even if you know these language constructs.
*/
#include <iostream>

using namespace std;

int main() {
	int year = 0;
	int month = 0;
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter month: ";
	cin >> month;
	cout << "\n";
	if (month == 1) {
	cout << "31 days" << endl;
	} else if (month == 4) {
        cout << "30 days" << endl;
        } else       if (month == 1) {
        cout << "31 days" << endl;
        } else if (month == 3) {
        cout << "31 days" << endl;
        } else if (month == 5) {
        cout << "31 days" << endl;
        } else if (month == 6) {
        cout << "30 days" << endl;
        } else if (month == 7) {
        cout << "31 days" << endl;
        } else if (month == 8) {
        cout << "31 days" << endl;
        } else if (month == 9) {
        cout << "30 days" << endl;
        } else if (month == 10) {
        cout << "31 days" << endl;
        } else if (month == 11) {
        cout << "30 days" << endl;
        } else if (month == 12) {
        cout << "31 days" << endl;
        } else if (month == 2) {
        if (year % 4 ==0) {
		cout << "29 days" << endl;
        } else
	cout << "28 days" << endl;
	}


return 0;}
