/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Determine minimum and maximum.
 */

//System Libraries
#include<iostream>

using namespace std;

int main()
{
 double Num1, Num2;

 cout << "Enter two numbers separated by a space: ";
 cin >> Num1 >> Num2;

 if(Num1 > Num2)
 cout << "The larger number is: " << Num1 << endl;
 else
 cout << "The larger number is: " << Num2 << endl;


 return 0;
}