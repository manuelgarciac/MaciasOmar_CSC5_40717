/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 7, 2015, 5:30 PM
 * Purpose: Homework, Program Projects 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    int frstInt , secInt , sumOfIn , proOfIn;
    //frstInt is the first integer
    //secInt is the second integer
    //sumOfIn is the sum of the integers
    //proOfIn is the product of the integers
    
    cout<<"This program finds the sum and product of two integers."<<endl;
    cout<<"Enter the first integer."<<endl;
    
    cin>>frstInt;
    
    cout<<"Enter the second integer."<<endl;
    
    cin>>secInt;
    
    sumOfIn = frstInt + secInt;
    proOfIn = frstInt * secInt;
    
    cout<<"If your first integer is ";
    cout<<frstInt;
    cout<<" and your second integer is ";
    cout<<secInt<<endl;
    cout<<"Then the sum of the integers is ";
    cout<<sumOfIn<<endl;
    cout<<"and the product of the integers is ";
    cout<<proOfIn;
    cout<<"."<<endl;
    
    //Exit stage right
    
    return 0;
}

