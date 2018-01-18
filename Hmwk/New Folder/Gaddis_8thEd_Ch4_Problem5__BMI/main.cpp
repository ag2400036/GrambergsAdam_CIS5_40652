/* 
 * File:   main.cpp
 * Author: Adam Grambergs
 * Created on January 17, 2018, 7:50 PM
 * Purpose:  Calculate a person's BMI.
 */

//System Libraries
#include<iostream>

using namespace std;

int main()

{

     int H, W, BMI;

 cout << "Enter your height and weight: \n";
 
 cout << "Height (in inches): "; 
    cin >> H;
 
 cout << "Weight (in pounds): ";
    cin >> W;
 
    BMI = W * 703 / ( H * H );
            
    cout << "Your current BMI is: " << BMI << endl;       
    if ( BMI > 25 )
                cout << "You are overweight, try a diet. ";
                        
            else if ( BMI < 18.5 )
                cout << "You are underweight, try adding some protein. ";
                        
            else 
                cout << "You are most likely in optimal health. Congratulations! ";

return 0;
}