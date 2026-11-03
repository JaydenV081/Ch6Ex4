/*
Developer: Jayden Veloz
File Name: Ch6Ex3.cpp
Date: 11 / 2 / 26
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double kineticEnergy(int mass, int velocity);

int main() {
    int mass, velocity;

    // Gets mass
    cout << "Please enter a mass (in kg): ";
    cin >> mass;

    // Gets velocity
    cout << "Please enter a velocity (in m/s): ";
    cin >> velocity;

    // Calculates kinetic energy using function
    double KEnergy = kineticEnergy(mass, velocity);

    cout << "\nThe kinetic energy of is " << KEnergy << " J";
    return 0;
}

// Function used to calculate kinetic energy
// KE = 1/2 mv^2
// Returns value to KEnergy variable
double kineticEnergy(int mass, int velocity) {
    return (mass * pow(velocity, 2)) / 2;
}