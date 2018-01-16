/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate Test Average
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main()
{
double Score1, Score2, Score3, Score4, Score5, Average;

 cout << "Enter score 1: ";
 cin >> Score1;
 cout << "Enter score 2: ";
 cin >> Score2;
 cout << "Enter score 3: ";
 cin >> Score3;
 cout << "Enter score 4: ";
 cin >> Score4;
 cout << "Enter score 5: ";
 cin >> Score5;

 Average = (Score1 + Score2 + Score3 + Score4 + Score5)/5;

 cout << setprecision(1) << fixed;
 cout << "The average score is: " << Average << endl;

 return 0;
}