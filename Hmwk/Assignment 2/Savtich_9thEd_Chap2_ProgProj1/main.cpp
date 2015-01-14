/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 14, 2015, 10:35 AM
 * Purpose: Homework, Program Project 1
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const float CNVLBGM=4.53592e2f;

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables 
    const float CONC=1e-3f;//Sweetener concentration
    float wtCoke=3.5e2f;//Weight of coke in grams
    float kMouse=5.0f;//quantity of sweetener that kills a mouse in grams
    float wtMouse=3.5e1f;//Weight of mouse in grams
    float kPer, wtDsPer;
    int nCans;
    //input the desired weight of a person
    cout<<"Input your desired weight in pounds"<<endl;
    cout<<"Format the input as a float"<<endl;
    cin>>wtDsPer;
    wtDsPer*=CNVLBGM;//convert to grams
    //Calculation
    kPer=kMouse/wtMouse*wtDsPer;
    nCans=kPer/wtCoke/CONC;
    //Output the limit of what you can drink
    
    cout<<"Number of cans of diet coke";
    cout<<" that will kill you = "<<nCans<<endl;
    
    //Exit Stage Right!
    return 0;
}

