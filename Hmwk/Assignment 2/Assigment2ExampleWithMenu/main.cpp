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
const int CNVHRMN=60;//conversion from hours to minutes
const int CNVMNSC=60;//conversion fromMinutes to seconds

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    //Assignment 2 Menu Prompt
    cout<<"Solution 1 Savith 9thEd Chap 2 Prob 2"<<endl;
    cout<<"Solution 2 Savith 8thEd Chap 2 Prob 3"<<endl;
    cout<<"You get the idea"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Base upon the choice, display the results
    switch(choice){
        case 1:{
            cout<<"You have selected Solution 1"<<endl;
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
        case 2:{
            cout<<"You have selected Solution 2"<<endl;
            
            break;
        }
        default:cout<<"Incorrect choice"<<endl;
    }
    return 0;
}

