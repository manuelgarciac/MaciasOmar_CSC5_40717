/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 7, 2015, 7:30 PM
 * Purpose: Homework, Program Project 4
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

const float GRAVITY = 32.174;
    //(ft/sec^2)


//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    //Declare Variables
    unsigned int time;
        //(secs)
    float dist;
        //distance (ft)
    //Prompt user for input
    cout<<"This Program calculates free fall"<<endl;
    cout<<"distance dropped in feet with an"<<endl;
    cout<<"object starting at rest."<<endl;
    cout<<"Input the free-fall time drop in seconds"<<endl;
    cout<<"The time input in a positive integer"<<endl;
    cin>>time;
    //Calculate the distance dropped
        //dist=1.0f/2*GRAVITY*time*time
        //dist=1/2.0f*GRAVITY*time*time
        //dist=0.5f*GRAVITY*time*time
        //dist=GRAVITY*time*time
        //dist=5e-1f*Gravity*time*time
    dist=5e-1f*GRAVITY*time*time;
    //Outout the results
    cout<<"Distance dropped = "<<dist<<" (ft)"<<endl;
    
    //Exit stage right
    
    return 0;
}

