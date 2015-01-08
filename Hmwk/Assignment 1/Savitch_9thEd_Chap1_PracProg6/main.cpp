/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 7, 2015, 4:26 PM
 * Purpose: Homework, Practice Program 6
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main (int argc, char** argv) {
    
    int number_of_pods , peas_per_pod , total_peas;
    
    cout<<"Press return after entering a number."<<endl;
    cout<<"Enter the number of pods:"<<endl;
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<" pea pods"<<endl;
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then"<<endl;
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods."<<endl;
    
    
    
    //a) Having a space between the < and iostream caused the build to fail.
    //b) Omitting one of the > symbols caused the build to fail.
    //c) Omitting int from int main() seems to not have impacted the program.
    //d) Misspelling the word main caused the build to fail.
    //e) Omitting one of the () caused the build to fail. Omitting both ()
    //   caused the build to fail.
    //f) Misspelling cout and cin caused the build to fail. Omitting one or
    //   both of the << in the cout statement caused the build to fail. Leaving
    //   off the ending curly brace caused the build to fail.
    
    //Exit stage right!
    
    return 0;
}

