/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 8, 2018, 12:40 AM
 * Purpose: Write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this year.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() 
{
    //Declare Variables
    float sales_division (0.58);
    int total_sales = 8600000;
    int sales = sales_division * total_sales; 
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    
    cout << left << setw(30) << "Company Annual Sales:" << right << setw(1) << " $" << setw(6) << total_sales << endl;
    cout << left << setw(30) << "East Coast Sales Total:" << right << setw(1) << " $" << setw(6) << sales << endl;
    //Exit stage right!
    return 0;
}