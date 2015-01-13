/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 13, 2015, 10:15 AM
 * Purpose: bitcoin conversion
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables and initialize
    float bcToDlr=232.8;   //January 13, 2015 10:17am
    float erToDlr=0.849381;//Same date
    float ynToDlr=118.03;  //Same date
    float bitcoin,dollars,euros,yen;
    //inut the number of bitcoin and then convert
    cout<<"Input the number of bitcoin "<<endl;
    cout<<"You wish to purchase."<<endl;
    cin>>bitcoin;
    //convert to all the currencies
    dollars=bcToDlr*bitcoin;
    euros=erToDlr*dollars;
    yen=ynToDlr*dollars;
    //Output the results
    cout.setf(ios::fixed);
    cout.precision(2);
    cout<<bitcoin<<" =   "<<dollars<<"(dollars)"<<endl;
    cout<<bitcoin<<" =   "<<euros<<"(euros)"<<endl;
    cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
    
    //Exit stage right
    
    return 0;
}

