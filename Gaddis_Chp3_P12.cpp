/*Gaddis - Chapter 3 - Problem 12
 * Convert Celsius to Fahrenheit temperature.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float C, F;

    //Get Celsius value from user.
    cout << "Celsius value: ";
    cin >> C;

    //Convert to Fahrenheit.
    F = 9.0 / 5.0 * C + 32;
    
    //Output result
    cout << "In Fahrenheit: " << F << " degrees." << endl;
    
    return 0;
}

