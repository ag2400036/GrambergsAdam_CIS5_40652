/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate Average Rainfall
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

int main()
{
 string Month1, Month2, Month3;
 double Rain1, Rain2, Rain3;
 double Average;

 cout << "Enter the name of the month: ";
 cin >> Month1;
 cout << "Enter the rainfall in inches: ";
 cin >> Rain1;
 cout << "Enter the name of the month: ";
 cin >> Month2;
 cout << "Enter the rainfall in inches: ";
 cin >> Rain2;
 cout << "Enter the name of the month: ";
 cin >> Month3;
 cout << "Enter the rainfall in inches: ";
 cin >> Rain3;

 Average = (Rain1 + Rain2 + Rain3)/3;

 cout << setprecision(2) << fixed;
 cout << "The average rainfall for " << Month1 << ", "
  << Month2 << " , " << Month3 << " is: " << Average << endl;

 return 0;
}