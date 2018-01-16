/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 10, 2018, 8:20 PM
 * Purpose:  Create a program to run Lab 1 Assignment. 
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
 double PricePerGallon, TaxTotal, BasePrice, PercentagePrice, ProfitRange, ProfitRange2;// Declare 5 floating-point variables
 
   cout << "Enter the Price Per Gallon: $";  // Prompting message
   cin >> PricePerGallon;                 // Read input into variable 
 
   // Computations
   TaxTotal = .184 + .417 + .0225 * PricePerGallon;
   BasePrice = PricePerGallon - .184 - .417 - .0225;
   PercentagePrice = PricePerGallon / BasePrice * 100;
   ProfitRange = .065 * PricePerGallon;
   ProfitRange2 = .025 * PricePerGallon;
   // Print the results
   cout << "The total tax is: $" << TaxTotal << endl;
   cout << "The base price is: $" << BasePrice << endl;
   cout << "The percentage price is: " << PercentagePrice << " %" << endl;
   cout << "The profit range is: $" << ProfitRange2 << " - " << ProfitRange << endl;
   return 0;
}