/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 13, 2015, 5:33 PM
 * Purpose: Homework, Problem 3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    float mph,pace;
    
    cout<<"This program converts your speed in miles per hour "<<endl;
    cout<<"(mph) displayed in your treadmill into your pace."<<endl;
    //prompt user for input
    cout<<"Enter your mph:"<<endl;
    cin>>mph;
    pace=(60/mph);
    cout<<"If your mph is "<<mph;
    cout<<" than you will complete a mile in "<<pace;
    cout<<" minutes."<<endl;
    
    return 0;
}

