/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 8, 2018, 12:40 AM
 * Purpose: Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. The tax should be 6.75% of the meal cost. The tip should be 20% of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.
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
    float meal (88.67),
        tax(0.068),
        tip(0.2),
        total_tax (meal * tax),
        subtotal (meal + total_tax),
        total_tip (subtotal * tip),
        total (subtotal + total_tip);
        
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << setprecision(2) << fixed;
    cout << left << setw(15) << "meal:" << right << setw(1) << " $" << setw(6) << meal << endl;
    cout << left << setw(15) << "tax:" << right << setw(1) << " $" << setw(6) << total_tax << endl;
    cout << left << setw(15) << "tip:" << right << setw(1) << " $" << setw(6) << total_tip << endl;
    cout << left << setw(15) << "total:" << right << setw(1) << " $" << setw(6) << total << endl;
    //Exit stage right!
    return 0;
}