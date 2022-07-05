/*Gaddis - Chapter 3 - Problem 18
 * 
 */

#include <iostream>
#include <cmath>  //for pow function
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float Principal, Rate;  //Principal is balance in account, Rate is interest
    int T;                  //Number of times compounded during year
    
    //Get principal, rate, & T from user.
    cout << "What is the principal on the account?" << endl;
    cin >> Principal;
    cout << "What is the interest (in percent)?" << endl;
    cin >> Rate;
    cout << "How many times compounding during the year?" << endl;
    cin >> T;
    
    //Compute amount in account at the end of the year.
    float Amount = Principal * pow( 1 + (Rate*0.01) / T, T );
    float Interest = Amount - Principal;
    
    //Output summary.
    cout << setprecision(2) << fixed;
    cout << "Interest Rate:       " << setw(8) << right << Rate << "%" << endl;
    cout << "Times Compounded:    " << setw(8) << right << T << endl;
    cout << "Principal:         $ " << setw(8) << right << Principal << endl;
    cout << "Interest:          $ " << setw(8) << right << Interest << endl;
    cout << "Amount in Savings: $ " << setw(8) << right << Amount << endl;
    
    return 0;
}

