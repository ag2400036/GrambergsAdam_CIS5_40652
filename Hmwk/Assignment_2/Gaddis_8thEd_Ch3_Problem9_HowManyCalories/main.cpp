/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate calories
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 double CookiesAte, CaloriesConsumed;
 
 cout << "How many cookies did you eat? ";
 cin >> CookiesAte;
 
 CaloriesConsumed = CookiesAte * 100;
 
 cout << "You consumed ";
 cout << CaloriesConsumed << " calories. " << endl;
 
 return 0;
}