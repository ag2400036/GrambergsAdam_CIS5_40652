/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Calculate the answer of two random numbers added together.
 */

//System Libraries
#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

int main()

{ 
    int num1, num2, sum, ans;
    unsigned seed = time ( 0 );
    srand ( seed );
    
    num1 = 100 + rand() % 999;
    num2 = 100 + rand() % 999;

 sum = num1 + num2;

 cout << setw(5) << num1 << endl;
 cout << setw(5) << num2 << " + \n";
 cout << setw(5) << "------\n";

 cout << "What did you come up with? ";
 cin >> ans;

 if(ans == sum)
    cout << "Congratulations, you got it right. \n";
 
 else
    cout << "Sorry, that's not right. The right answer is: " << sum << "\n";

 return 0;
}