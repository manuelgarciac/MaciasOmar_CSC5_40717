/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 13, 2015, 6:14 PM
 * Purpose: Homework, Problem 4
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;
 
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    
    string lastNam,yourNam,food,number,adjectv,color,animal;

    cout<<"This program play the game Mad Lib."<<endl;
    cout<<"Please insert the following information:"<<endl;
    //prompt user for input
    cout<<"The last name of your instructor, your first name, "<<endl;
    cout<<"a food, a number between 100 and 120, an adjective, "<<endl;
    cout<<"a color, and an animal.";
    cout<<" "<<endl;
    cin>>lastNam;
    cin>>yourNam;
    cin>>food;
    cin>>number;
    cin>>adjectv;
    cin>>color;
    cin>>animal;
    cout<<" "<<endl;
    cout<<"Dear Instructor "<<lastNam<<","<<endl;
    cout<<" "<<endl;
    cout<<"I am sorry that I am unable to turn in my homework"<<endl;
    cout<<"at this time. First, I ate a rotten "<<food<<","<<endl;
    cout<<"which made me turn "<<color<<" and extremely ill."<<endl;
    cout<<"I came down with a fever of "<<number<<". Next, "<<endl;
    cout<<"my "<<adjectv<<" pet "<<animal<<" must have smelled"<<endl;
    cout<<"the remains of the "<<food<<" on my homework, "<<endl;
    cout<<"because he ate it. I am currently rewriting my"<<endl;
    cout<<"and hope you will accept it late."<<endl;
    cout<<" "<<endl;
    cout<<"Sincerely"<<endl;
    cout<<yourNam<<endl;
    
    //Exit Stage Right
    return 0;
}

