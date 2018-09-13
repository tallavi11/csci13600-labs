/*
Author: Tal Lavi
Course: CSCI-133
Instructor: Mike Zamansky
Assignment: Lab2D

Write a program fibonacci.cpp, which uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/
#include <iostream>

using namespace std;

int main()
{
	int F[60];
	int n = 2;
	F[0] = 0;
	F[1] = 1;
	cout << F[0] << endl;
	cout << F[1] << endl;
	while (n < 60)
	{
	F[n] = F[n-1] + F[n-2];
	cout << F[n] << endl;
	n++;	
	}
return 0;}
