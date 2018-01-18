/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Determine if the date is magic based on day * month = year.
 */

//System Libraries
#include<iostream>

using namespace std;

int main()

{

     int L1, W1, L2, W2;

 cout << "Enter the lengths and widths of two rectangles: ";
 
 cout << "Length one: "; 
    cin >> L1;
 
 cout << "Width one: ";
    cin >> W1;
 
 cout << "Length two: ";
    cin >> L2;
 
 cout << "Width two: ";
    cin >> W2;

 if ( ( L1 * W1 ) > ( L2 * W2 ) )
    cout << "The first rectangle has a larger area. ";
 
 else if ( ( L2 * W2 ) > ( L1 * W1 ) )
    cout << "The second rectangle has a larger area. ";
 
 else 
     cout << "The rectangles have the same area. ";

return 0;
}