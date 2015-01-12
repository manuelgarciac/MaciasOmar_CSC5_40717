/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 12, 2015, 11:38 AM\
 * Purpose: My car Payment
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float intRate=0.0319f/12;
    float msrplus=4e4f;//Loan amount for Buick Avenir
    char nPaymnt=60; //Number of monthly payments
    //calculate the monthly payments
    float temp=pow((1+intRate),nPaymnt);
    cout<<"Temp = "<<temp<<endl;
    float mPay=intRate*temp*msrplus/(temp-1);
    //output the inputs
    cout<<"Interest per year in percent = "<<intRate*100<<endl;
    cout<<"Number of payments = "<<static_cast<int>(nPayment)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
    //output our car payment
    cout<<fixed<<setPrecision(2)<<showpoint;
    cout<<"My Avenir will cost $"<<mPay<<endl;
    
    
    return 0;
}

