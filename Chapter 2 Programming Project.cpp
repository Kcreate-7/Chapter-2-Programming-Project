// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    float Total, Weekly, Citrus; // Variable declaration

    // Initialization

    Total = 16500;

    Weekly = Total * .15;

    Citrus = Total * .58;

    cout << "Out of the total number of customers surveyed, " << Weekly << " people purchase one or more energy drinks weekly. \n";
    cout << "Out of the surveyed customers, " << Citrus << " people prefer the citrus flavors.";

    return 0;








    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
