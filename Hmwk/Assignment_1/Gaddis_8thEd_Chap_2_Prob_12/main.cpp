/*
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 8, 2018, 4:23 PM
 * Purpose:  Write a program that calcs. the number of acres in a tract of land with 391,876 square feet.
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
    float acre = 43560;
    float land = 391876;
    
    float conversion = land / acre;
      
        
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout << " Number of acres " << conversion << endl;
   
    //Exit stage right!
    return 0;
}