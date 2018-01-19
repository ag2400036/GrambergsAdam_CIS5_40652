/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 10, 2018, 8:20 PM
 * Purpose:  Solve the Paycheck problem.
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
    //Declare Variables
    double payRate, hrsWrkd, payChck;
    
    //Initialize Variables
    cout<<"This program tells you your pay check. "<<endl;
    cout<<"Type in your pay rate. "<<endl;
    cin>>payRate;
    cout<<"Type in how many hours you worked. "<<endl;
    cin>>hrsWrkd;
    
    //Process/Map inputs to outputs
    if(hrsWrkd>40)       payChck=(payRate*40)+((hrsWrkd-40)*2*payRate);
    else payChck=payRate*hrsWrkd;
    
    //Output data
    cout<<"Your weekly paycheck is: $"<<payChck<<endl;
    
    //Exit stage right!
    return 0;
}