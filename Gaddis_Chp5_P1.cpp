/*Gaddis Chapter 5 Problem 1
*/
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Ask user for a positive integer.
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    //Check that the user entered a positive number.
    if( n < 0 ) {
        cout << "You must enter a positive integer!" << endl;
        return 1;
    }
    
    //Calculate sum.
    unsigned long f = 1;
    for( unsigned long i=1; i <= n; i++ )
        f *= i;
    
    //Print output.
    cout << "The factorial of " << n << " is " << f << endl;
    
    return 0;
}

