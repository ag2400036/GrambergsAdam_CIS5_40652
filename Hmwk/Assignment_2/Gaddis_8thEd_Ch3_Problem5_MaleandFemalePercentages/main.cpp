/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate Male and Female Percentages
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 double Males, Females, Total, PercentMale, PercentFemale;
 

 cout << "Enter the number of males in the class: ";
 cin >> Males;
 cout << "Enter the number of females in the class: ";
 cin >> Females;
 
 Total = Males + Females;
 PercentMale = (Males / Total) * 100;
 PercentFemale = (Females / Total) * 100;
 
 cout << "The class is " << PercentMale; 
 cout << "% male and " << PercentFemale; 
 cout << "% female." << endl;

 return 0;
}