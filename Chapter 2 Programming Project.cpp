// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.


/* Kyle Bell
CSC 221*/

#include <iostream>

using namespace std;

int main()
{
    float Total, Weekly, Citrus; // Variable declaration

    // Initialization

    Total = 16500;

    Weekly = Total * .15;   // to get the total of customers that buy one or more drink/ week

    Citrus = Total * .58;   // to get the total of customers that like the citrussy flavors over others 

    cout << "Out of the total number of customers surveyed, " << Weekly << " people purchase one or more energy drinks weekly. \n";
    cout << "Out of the surveyed customers, " << Citrus << " people prefer the citrus flavors.";

    return 0;








    
}

