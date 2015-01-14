/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 13, 2015, 7:13 PM
 * Purpose: Homework, Problem 5
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
float PI=3.1415;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    float radius, volume;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    //Prompt user for radius of sphere in inches
    cout<<"Enter radius of a sphere in inches."<<endl;
    
    cin>>radius;
    
    volume=(4.0/3.0)*PI*radius*radius*radius;
    cout<<"You've entered "<<radius<<" inches."<<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"The volume is "<<volume<<" inches"<<endl;
    

    
    //Exit Stage Right!
    
    return 0;
}

