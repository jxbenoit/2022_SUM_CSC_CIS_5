/*Gaddis Chap 5 Prob 22
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int size;
    cout << "How big of a square do you want? ";
    cin >> size;

    //Draw a text square.
    for( int i = 0; i < size; i++ ) { //Print rows of text
        for( int j = 0; j < size; j++ )  //Print each character in a row
            cout << "X";
        cout << endl;
    }
    
    return 0;
}

