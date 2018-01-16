/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate Ingredients
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 double Sugar, Butter, Flour, Cookies;
 
 cout << "How many cookies would you like to make? ";
 cin >> Cookies;
 
 Sugar = Cookies * (1.5/48);
 Butter = Cookies / 48 ;
 Flour = Cookies * (2.75/48);
 
 cout << "You will need: ";
 cout << Sugar << " cup(s) of sugar, ";
 cout << Butter << " cup(s) of butter, and ";
 cout << Flour << " cup(s) of flour" << endl;
 return 0;
}