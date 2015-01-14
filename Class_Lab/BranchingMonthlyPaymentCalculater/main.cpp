/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 14, 2015, 11:24 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    float i;//Interest rate percent per year
    float t;//temp variable
    float l;//loan amount in dollars
    float mp;//monthly payment
    unsigned short n;//number of months
    //input the variables required
    cout<<"What is the interest rate in per cent per year (format flow)"<<endl;
    cin>>i;
    i/=(100*12);//convert to decimal
    cout<<"What is the loan amount $'s (floating format"<<endl;
    cin>>l;
    cout<<"Number of monthly payments (format integer)"<<endl;
    cin>>n;
    //calculate the monthly payment
    if(i<=0){
        mp=l/n;
    }else{
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
    }
    //display the results
    cout<<fixed<<setprecision(2);
    cout<<"Your monthly payment $"<<mp<<endl;
    
            
    //Exit Stage Right!        
    return 0;
}

