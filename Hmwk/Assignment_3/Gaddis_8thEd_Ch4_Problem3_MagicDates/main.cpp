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

     int month, day, year;

 cout << "Enter a month (between 1 and 12): ";
    cin >> month;
 
 cout << "Enter a day (1-31): ";
    cin >> day;
 
 cout << "Enter a two digit year: ";
    cin >> year;

 if(month * day == year)
    cout << "The date is MAGIC ";
 
 else
    cout << "The date is NOT magic. ";

return 0;
}