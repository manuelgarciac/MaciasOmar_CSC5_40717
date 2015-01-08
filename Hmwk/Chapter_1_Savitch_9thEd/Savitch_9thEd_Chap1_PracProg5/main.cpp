/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 6, 2015, 8:56 PM
 * Purpose: Homework, Practice Projects 6
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    int width , height , totalLength;
    
    cout<<"Press return after entering a number"<<endl;
    cout<< "Enter the width in feet of the fence:"<<endl;
    
    cin>>width;
    
    cout<<"Enter the height in feet of the fence:"<<endl;
    cin>>height;
    totalLength = width + height;
    cout<<"If your fence is ";
    cout<<width;
    cout<<" feet in width "<<endl;
    cout<<"and ";
    cout<<height;
    cout<< " feet in height, then "<<endl;
    cout<< "your fence is ";
    cout<<totalLength;
    cout<<" feet in total length."<<endl;

    //Exit stage right!
    return 0;
}

