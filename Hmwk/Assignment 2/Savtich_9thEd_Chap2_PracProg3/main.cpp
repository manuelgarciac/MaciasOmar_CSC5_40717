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
const int CNVHRMN=60;//conversion from hours to minutes
const int CNVMNSC=60;//conversion fromMinutes to seconds
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    float mph;
    float hpm;
    float fmpm;
    float impm;
    float fmspm;
    
    cout<<"This program converts your speed in miles per hour "<<endl;
    cout<<"(mph) displayed in your treadmill into your pace."<<endl;
    //prompt user for input
    cout<<"Enter your mph:"<<endl;
    cin>>mph;
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=static_cast<int>
    hpm=(60/mph);
    cout<<"If your mph is "<<mph;
    cout<<" than you will complete a mile in "<<hpm;
    cout<<" minutes."<<endl;
    
    return 0;
}

