/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab1A

Write a program smaller.cpp that asks the user to input two integer numbers and prints out the smaller of the two.
*/
#include <iostream>

using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	if(num1 < num2){
		cout << "\nThe smaller of the two is " << num1 << endl;
		} else {
		cout << "\nThe smaller of the two is " << num2 << endl;
		}
return 0;}
