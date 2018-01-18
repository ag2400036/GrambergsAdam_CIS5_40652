/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Calculate an object's weight.
 */

//System Libraries
#include<iostream>

using namespace std;

int main()

{

     int W, m;

 cout << "Enter your object's mass (in kilograms) : \n";
    cin >> m;
 
 W = m * 9.8; 
 
 if ( W > 1000 )
     cout << "Your object is too heavy for this scale. Please, one object only.";
 
 else if ( W < 10 )
     cout << "Your object is too light for this scale. Find something bigger. ";
 
 else
     cout << "Your object weighs: " << W << "kg" << endl;

return 0;
}