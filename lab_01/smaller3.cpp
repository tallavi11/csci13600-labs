/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1B

Write a program smaller3.cpp that asks the user to input three integer numbers and prints out the smaller of the three.
*/
#include <iostream>

using namespace std;

int main() {
	int x = 0;
	int y = 0;
	int z = 0;
	cout << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second number: ";
        cin >> y;
	cout << "Enter the third number: ";
        cin >> z;
	cout << "\n";
	if (x < y){
		if(x < z){	
			cout << "The smaller of the three is " << x << endl;
		} else {
			cout << "The smaller of the three is " << z << endl;
		}
	} else if(z < y){
		cout << "The smaller of the three is " << z << endl;
		} else {
	 	cout << "The smaller of the three is " << y << endl;
		}

return 0;}
