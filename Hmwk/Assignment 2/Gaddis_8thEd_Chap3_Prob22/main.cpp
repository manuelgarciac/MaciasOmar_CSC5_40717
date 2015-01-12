/* 
 * File:   main.cpp
 * Author: Omar Macias
 * Created on January 12, 2015, 10:54 AM
 * Purpose: Use cmath functions sin,cos, and tan
 */

//System Libraries
#include <cstdlib>//Random rand(), srand()
#include <iostream>//Ketboard/Monitor I/O
#include <fstream>//File I/O
#include <ctime> //Time functions
#include <cmath> // Math function library
#include <iomanip> // Format Library
using namespace std;

//User Libraries

//Global Constants
const float PIDIV4=atan(1); //Pi/4=atan(1)
const float CVNDGRD=PIDIV4/45;//pi/4/45 is the convergen

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object
    ofstream output;
    //Open the file
    output.open("SinCosTan.dat");
    //Declare the angle variable as an interger
    //in degress, and the radian angle as a float
    int angDeg=rand()%361-180;//angle from [-180, 180]
    float angRad=angDeg*CVNDGRD;
    //Output the angle to the screen
    cout<<"Angle in degrees => "<<angDeg<<endl;
    cout<<"Angle in radians => "<<angRad<<endl;
    //Output the sin, cos, tan
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
    cout<<"cos("<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
    cout<<"tan("<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
    //Output
    //Close the stream
    output.close();
    
    return 0;
}

