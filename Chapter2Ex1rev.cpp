/*
File Name: Chapter2Ex1rev.cpp
Programmer: Christopher O'Keefe
Date: 01/31/2026
Requirements:
Sum of Two Numbers Wire a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a variable named sum.


*
*/

#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
    int sum;
    cout <<"Please enter your first number";
    cin >> number1;
    cout << "Please enter your second number";
    cin >> number2;
    sum = number1 + number2;
    cout << "The sum of " << number1 << " + " << number2 << " is " << sum;
    return 0;

}

