/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 13, 2015, 9:24 PM
 * Purpose: Homework, Program Project 2
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    const float PRCTPAY=0.076;
    float prvAnSl;//Previous annual salary
    float rtPymnt;//Retroactive payment due
    float newAnSl;//New annual salary
    float newMnSl;//New monthly salary
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout<<"This program calculates your retroactive pay,"<<endl;
    cout<<"new annual salary, and new monthly salary."<<endl;
    //Prompt user for input
    cout<<"Please enter your previous annual salary."<<endl;
    cin>>prvAnSl;
    cout<<"Your previous annual salary was $"<<prvAnSl<<endl;
    rtPymnt=(prvAnSl/2)*PRCTPAY;
    cout<<"Your retroactive payment will be $"<<rtPymnt<<endl;
    newAnSl = prvAnSl * PRCTPAY + prvAnSl;
    cout<<"Your new annual salary is $"<<newAnSl<<endl;
    newMnSl=newAnSl/12;
    cout<<"Your new monthly salary is $"<<newMnSl<<endl;

    
    
    return 0;
}

