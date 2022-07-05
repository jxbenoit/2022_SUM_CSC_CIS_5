/*Gaddis - Chap 4 - Prob 1
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int a, b;
    
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if( a > b )
        cout << "a is larger; b is smaller." << endl;
    else if( a < b )
        cout << "b is larger; a is smaller." << endl;
    else
        cout << "a and b are the same." << endl;
    
    return 0;
}

