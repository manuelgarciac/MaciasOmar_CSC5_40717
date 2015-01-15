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
const int CNVMNSC=60;//conversion from minutes to seconds
//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    float mph;  //miles per hour
    float hpm;  //Hours per mile
    float fmpm; //float minutes per mile
    int impm;  // integer minutes per mile
    float fmspm;//float of seconds in minutes
    
    cout<<"This program converts your speed in miles per hour "<<endl;
    cout<<"(mph) displayed in your treadmill into your pace."<<endl;
    //prompt user for input
    cout<<"Enter your mph:"<<endl;
    cin>>mph;
    hpm=1/mph;
    fmpm=hpm*CNVHRMN;
    impm=fmpm;
    cout.setf(ios::fixed);
    cout.precision(1);
    fmspm=(fmpm-impm)*CNVMNSC;
    cout<<"If your mph is "<<mph;
    cout<<" than you will complete a mile in "<<impm;
    cout<<" minutes and "<<fmspm<<" seconds"<<endl;
    
    return 0;
}

