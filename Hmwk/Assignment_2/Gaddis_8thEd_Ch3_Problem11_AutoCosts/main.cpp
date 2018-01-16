/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate celsius to fahrenheit
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 double Celsius, Fahrenheit;
 
 cout << "What temperature is it in degrees Celsius? ";
 cin >> Celsius;
 
 Fahrenheit = (9*Celsius)/5 + 32;
 
 cout << "It is ";
 cout << Fahrenheit << " degrees Fahrenheit." << endl;
 
 return 0;
}