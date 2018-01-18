/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Calculate how many minutes, hours, or days in the entered amount of
 * seconds.
 */

//System Libraries
#include<iostream>

using namespace std;

int main()

{

     float sec, min, hour, day;

 cout << "Enter a number of seconds: \n";
    cin >> sec;
 
    min = sec / 60;
    hour = sec / 3600;
    day = sec / 86400;
            
 if ( sec < 60 )
     cout << "You entered " << sec << " seconds. ";
 
 else if ( ( 60 <= sec ) && ( sec < 3600 ) )
     cout << "You entered " << min << " minute(s) . ";
 
 else if ( ( 3600 <= sec ) && ( sec < 86400 ) )
     cout << "You entered " << hour << " hour(s). ";
 
 else if ( 86400 <= sec )
     cout << "You entered " << day << " day(s) ";
 
return 0;
}