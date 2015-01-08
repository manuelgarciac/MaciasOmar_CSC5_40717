/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 6, 2015, 6:40 PM
 * Purpose: Homework, Practice Program 3
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    int number_of_pods , peas_per_pod , total_peas;
    
    cout<<"Hello"<<endl;
    cout<<"Press return after entering a number"<<endl;
    cout<<"Enter the number of pods:"<<endl;
    
    cin>>number_of_pods;
    
    cout<<"Enter the number of peas in a pod:"<<endl;
    cin>>peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout<<"If you have ";
    cout<<number_of_pods;
    cout<<"pea pods"<<endl;
    cout<<"and ";
    cout<<peas_per_pod;
    cout<<" peas in each pod, then "<<endl;
    cout<<"you have ";
    cout<<total_peas;
    cout<<" peas in all the pods."<<endl;
    cout<<"Good-bye"<<endl;
    
    //Exit stage right
    return 0;
}

