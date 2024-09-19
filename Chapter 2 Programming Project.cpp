// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.

/* Kyle Bell
CSC 221*/

#include <iostream>


using namespace std;

int main()
{
	float Highway, City, Both, Tank;  // Assigning my float variables
	
	float cityDistance, hwyDistance, avgDistance; /*I think this is the right way to do this */



	//Initializing the variables
 
	Highway = 28.9;
	City = 23.5;
	Both = 26.2;
	Tank = 20.0;

	// Setting the formulas

	cityDistance = City * Tank;
	hwyDistance = Highway * Tank;
	avgDistance = Both * Tank;

	cout << "The car is able to travel " << cityDistance << " miles while driving in the city,\n";
	cout << "and " << hwyDistance << " miles when traveling on the highway.\n";
	cout << "The car is able to drive a combined " << avgDistance << " miles.";

	// the printout is good, plus I included the average mielage

	return 0;



	

	









}

