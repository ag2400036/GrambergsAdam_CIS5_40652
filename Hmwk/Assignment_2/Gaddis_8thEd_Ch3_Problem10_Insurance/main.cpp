/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate insurance 
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 double ReplacementCost, InsuranceAmount;
 
 cout << "How much would it cost to replace your structure? $";
 cin >> ReplacementCost;
 
 InsuranceAmount = ReplacementCost * .8;
 
 cout << "You should buy at least $";
 cout << InsuranceAmount << " worth of insurance." << endl;
 
 return 0;
}