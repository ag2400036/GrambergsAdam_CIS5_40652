/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate widgets
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 double NumWidgets, PalletFull, PalletEmpty;
 
 cout << "How much does the pallet weigh by itself (in lbs)? ";
 cin >> PalletEmpty;
 cout << "How much does the pallet weigh with widgets stacked on it (in lbs)? ";
 cin >> PalletFull;
 
 NumWidgets = ( PalletFull - PalletEmpty ) / 12.5;
 
 cout << "The total number of widgets on the pallet is : " << NumWidgets << endl;
 
 return 0;
}