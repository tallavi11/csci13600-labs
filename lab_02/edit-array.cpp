/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2B

Write a program edit-array.cpp that creates an array of 10 integers, and provides the user with an interface to edit any of its elements.
*/
#include <iostream>

using namespace std;

int main(){
	int mydata[10];
	int i = 0;
	int v = 1;
	while(i <10){
		mydata[i] = v;
		i++;
		}	
	i = 0;
	while(i < 10 && i >= 0) {
		cout << "\n";
		i = 0;
		while(i < 10){
			cout << mydata[i] << " ";
			i++;
			}
		cout << "\n";
		
		cout << "\nInput index: ";
		cin >> i;		
		cout << "Input value: ";
		cin >> v;
		mydata[i] = v;
		}	
	cout << "\nIndex out of range. Exit.\n";

return 0;}
