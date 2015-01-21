/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 21, 2015, 8:53 AM
 * Purpose: Factorial No Function
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nFactrl=1,n;
    //prompt user Input the factorial
    cout<<"What N would you like to use to"<<endl;
    cout<<" calculate N!."<<endl;
    cin>>n;
    //Do the calculation
    for(int i=1;i<=n;i++){
        nFactrl*=i;
    }
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    
    return 0;
}

