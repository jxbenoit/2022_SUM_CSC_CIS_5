/*Gaddis - Chapter 3 - Problem 1
 * 
 * Miles Per Gallon
 * Calculate number of miles that can be driven per gallon of gas.
*/

#include<iostream>

using namespace std;

int main(int argc, char** argv) {
    int TankSize, NumMilesOnFullTank;
    
    //Get tank size and number of miles on a full tank from user.
    cout << "What is the tank size?" << endl;
    cin >> TankSize;
    
    cout << "How many miles can be driven on a full tank?"  << endl;
    cin >> NumMilesOnFullTank;
    
    //Calculate number of miles per gallon of gas.
    float MilesPerGallon = (float) NumMilesOnFullTank / TankSize;

    //Display output.
    cout << "Number of miles per gallon: "
         << MilesPerGallon << " miles." << endl;
    
    return 0;
}

