/*Rand demo
 */

#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char** argv) {
    srand(time(0));

    int secret_number = rand() % 100 + 1;  //A number from 1-100
    
    cout << "Guess the secret number!" << endl;
    bool found = false;  //Did the user find the number?
    for( int i=0; i < 5 && ! found; i++ ) {
        int n;
        cout << "Enter your guess: ";  //Ask user to guess a number
        cin >> n;
        
        if( n > secret_number )
            cout << "Too high!" << endl;
        else if( n < secret_number )
            cout << "Too low!" << endl;
        else found = true;
    }

    if( found )
        cout << "Congratulations! you found the number!" << endl;
    else
        cout << "Sorry, you ran out of guesses" << endl;
  
    return 0;
}

