/*
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 8, 2018, 12:40 AM
 * Purpose: Write a program that defines the following variables: payAmount, payPeriods, annualPay. The program should calculate the employee's total annual pay by multiplying the employee's pay amount by the number of pay periods in a year and store the result in the annualPay variable. Display the total annual pay on the screen.
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main() 
{
    //Declare Variables
    int payAmount(2200.0), payPeriods(26), annualPay(payAmount * payPeriods);
      
        
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << "Annual Pay Total: " << annualPay << endl;
   
    //Exit stage right!
    return 0;
}