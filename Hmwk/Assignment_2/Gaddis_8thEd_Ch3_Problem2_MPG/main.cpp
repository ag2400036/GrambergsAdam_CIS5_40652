/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 12, 2018, 8:20 AM
 * Purpose:  Calculate Stadium Seating
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
 double ClassA = 15, ClassB = 12, ClassC = 9;
 double NumA, NumB, NumC;
 double TotalIncome;

 cout << "How many tickets were sold for Class A? ";
 cin >> NumA;
 cout << "How many tickets were sold for Class B? ";
 cin >> NumB;
 cout << "How many tickets were sold for Class C? ";
 cin >> NumC;

 cout << setprecision(2) << fixed;
 cout << "Sales from Class A: $" << NumA * ClassA << endl;
 cout << "Sales from Class B: $" << NumB * ClassB << endl;
 cout << "Sales from Class C: $" << NumC * ClassC << endl;

 TotalIncome = (NumA*ClassA) + (NumB*ClassB) + (NumC*ClassC);

 cout << "Total sales generated: $" << TotalIncome << endl << endl;

 return 0;
}