/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 21, 2015, 8:19 AM
 * Max Random
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here
int main(int argc, char** argv) {
    
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //declare a max variable
    int loop=100000000;
    int max=rand();
    //Now loop to find the max random number
    for(int i=2;i<=loop;i++){
        int r=rand();
        if(r>max)max=r;
    }
    //
    cout<<2^31;
    return 0;
}

