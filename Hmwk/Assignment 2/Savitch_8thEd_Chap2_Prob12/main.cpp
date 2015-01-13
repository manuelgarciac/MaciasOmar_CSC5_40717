/*
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 13, 2015, 10:15 AM
 * Purpose: Homework, Babylonian square root 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //declare variables
    float number,guess,r;
    //input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format fill be a positive float"<<endl;
    cin>>number;
    //first pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //output the first pass
    cout<<"First pass calculation -> "<<guess<<endl;
    //Second pass
    r=number/guess;
    guess=(guess+r)/2;
    //output the Second pass
    cout<<"Second pass calculation -> "<<guess<<endl;
    //Third pass
    r=number/guess;
    guess=(guess+r)/2;
    //output the third pass
    cout<<"Third pass calculation -> "<<guess<<endl;
    //Fourth pass
    r=number/guess;
    guess=(guess+r)/2;
    //output the fourth pass
    cout<<"Fourth pass calculation -> "<<guess<<endl;
    //Fifth pass
    r=number/guess;
    guess=(guess+r)/2;
    //output the Fifth pass
    cout<<"Fifth pass calculation -> "<<guess<<endl;
    
   //Exit stage right!       
    
    
    return 0;
}

