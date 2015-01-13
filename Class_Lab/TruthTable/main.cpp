/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 13, 2015, 9:15 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare 2 boolean variables
    bool X,Y;
    //Output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"      ";
    cout<<(!X||!Y?'T':'F')<<"   "<<endl;
    //Fill in the second row
    Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"      ";
    cout<<(!X||!Y?'T':'F')<<"   "<<endl;
    //Fill in the third row
    X=false;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"      ";
    cout<<(!X||!Y?'T':'F')<<"   "<<endl;
    //Fill in the fourth row
    X=false;Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<"  ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"    ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"       ";
    cout<<(!(X||Y)?'T':'F')<<"     ";
    cout<<(!X&&!Y?'T':'F')<<"       ";
    cout<<(!(X&&Y)?'T':'F')<<"      ";
    cout<<(!X||!Y?'T':'F')<<"   "<<endl;
    
    cout<<endl;
    cout<<"--------------------------------------------------------------------"<<endl;
    cout<<endl;
    
    int a=2,b=3;
    
    cout<<"a="<<a<<" and b="<<b<<endl;
    
    a=a^b;
    
    cout<<""
    b=a^b;
    a=a^b;
    
    
    
    //Exit stage right
    return 0;
}

