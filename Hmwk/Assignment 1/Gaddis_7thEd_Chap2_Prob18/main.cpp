/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 8, 2015, 7:48 AM
 * Purpose: Homework, Problem 18 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100;//Percent conversion

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    short custSrv=12467;//Customers Surveyed
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers
    //Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinkers
    short custC=custE*perCDrk/CONVPCT;//Citrus Dinkers
    //Output the results
    cout<<"Customers surveyed that are Energy Drinkers = ";
    cout<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers = ";
    cout<<custC<<endl;
   //Exit stage right
    return 0;
}

