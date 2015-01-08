/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 7, 2015, 6:24 PM
 * Purpose: Homework, Program Project 3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    int qrtrs , dimes , nicks , penns , tlChng;
    
    //qrtrs are quarters
    //nicks are nickels
    //penns are pennies
    //tlChng is total change
    
    cout<<"This program counts you change!"<<endl;
    cout<<"Enter the amount of quarters you have."<<endl;
    
    cin>>qrtrs;
    
    cout<<"Enter the amount of dimes you have."<<endl;
    
    cin>>dimes;
    
    cout<<"Enter the amount of nickels you have."<<endl;
    
    cin>>nicks;
    
    cout<<"Enter the amount of pennies you have."<<endl;
    
    cin>>penns;
    
    tlChng = (qrtrs*25) + (dimes*10) + (nicks*5) + (penns*1);
    
    cout<<"You have ";
    cout<<tlChng;
    cout<<" cents in change."<<endl;
    
    //Exit stage right
    
    return 0;
}

