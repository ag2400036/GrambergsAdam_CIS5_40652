/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 8, 2018, 12:40 AM
 * Purpose: Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4% and the country sales tax is 2%.
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
    float subtotal(95.00), tax(0.06), total_tax(tax * subtotal), total_due (subtotal + total_tax);
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << setprecision(2) << fixed;
    cout << left << setw(15) << "Order subtotal:" << right << setw(1) << " $" << setw(6) << subtotal << endl;
    cout << left << setw(15) << "Total tax:" << right << setw(1) << " $" << setw(6) << total_tax << endl;
    cout << left << setw(15) << "Total due:" << right << setw(1) << " $" << setw(6) << total_due << endl;
    //Exit stage right!
    return 0;
}