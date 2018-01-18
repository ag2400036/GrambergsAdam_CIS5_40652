/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Calculate the total cost of a purchase.
 */

//System Libraries
#include<iostream>
#include<iomanip>

using namespace std;

int main()

{ 

 int units;
 double sub, total;

 cout << "Enter the number of units sold: ";
    cin >> units;

 cout << setprecision( 2 ) << fixed;

 if( (units > 0 ) && ( units < 10 ) )
 {
    
     total = units * 99;
    
    cout << "The total is: $" << total << "\n";
 }
 
 else 
 {
     
     if( (units >= 10 ) && ( units <= 19 ) )
 {
 
     sub = ( units * 99 ) * 0.20;
 
     total = ( units * 99 ) - sub;
 
     cout << "The total is: $" << total << "\n";
 }
 
 else
 {
 
     if( ( units >= 20 ) && ( units <=49) )
 {
 
         sub = ( units * 99 ) * 0.30;
 
         total = ( units * 99 ) - sub;
 
         cout << "The total is: $" << total << "\n";
 }
 
 else
 {
 
     if( ( units >= 50 ) && ( units <= 99) )
 {
 
         sub = ( units * 99 ) * 0.40;
 
         total = ( units * 99 ) - sub;
 
         cout << "The total is: $" << total << "\n";
 }
 
 else
 {
 
     if(units >= 100)
 {

         sub = ( units * 99 ) * 0.50;
 
         total = ( units * 99 ) - sub;
 
         cout << "The total is: $" << total << "\n";
 }
 
 else
 {
 
 cout << "The number of units must be greater than 0.  \n";
 }
 }
 }
 }
 }

 return 0;
}