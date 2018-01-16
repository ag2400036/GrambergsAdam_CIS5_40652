/*
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 8, 2018, 4:23 PM
 * Purpose:  An electronics store sells circuit boards at 35% profit. Write a program that will calc the selling price of a circuit board that costs $14.95.
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
    float cb = 14.95;
    float profit = .35;
    
    float price = cb * profit + cb;
      
        
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << " Selling price:" << price << endl;
   
    //Exit stage right!
    return 0;
}