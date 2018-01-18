/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Calculate if the total of all the coins adds up to a dollar.
 */

//System Libraries
#include<iostream>

using namespace std;

int main()

{ 
   double pennies, nickels, dimes, quarters, total;

 cout << "Enter the number of pennies: ";
    cin >> pennies;
 
 cout << "Enter the number of nickels: ";
    cin >> nickels;
 
 cout << "Enter the number of dimes: ";
    cin >> dimes;
 
 cout << "Enter the number of quarters: ";
    cin >> quarters;

 total = (pennies * 0.01) + (nickels * 0.05) + (dimes * 0.10) + (quarters * 0.25);

 if(total == 1.00)
 cout << "Congratulations, You Win. You entered exactly one dollar. \n";
 
 else
 
 {
 
     if(total < 1.00 && total > 0)
 
     {
 
         cout << "You entered less than one dollar.  Try again. \n";
 
     }

     else 

     {
 
         if(total > 1.00)
 
         {
 
             cout << "You entered more than one dollar.  Try again. \n";
 
         }
 
         else

         {

             cout << "The number of coins must be greater than 0. Try again \n";
 
         }
 
     }
 
 }

 return 0;
}