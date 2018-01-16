/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate MPG 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() {
 double Gallons, Miles, MPG;// Declare 3 floating-point variables
 
   cout << "Enter the number of gallons your tank can hold: ";  // Prompting message
   cin >> Gallons;                 // Read input into variable 
   cout << "Enter the number of miles your car can travel on a full tank of gas: ";
   cin >> Miles;
 
   // Computations
   MPG = Miles / Gallons; 
   
   // Print the results
   cout << "The MPG of your car is: " << MPG << " MPG " << endl;
   
   return 0;
}