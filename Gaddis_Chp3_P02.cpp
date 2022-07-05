/*Gaddis - Chapter 3 - Problem 2
   Stadium Seating
 */

#include <iostream>
#include <iomanip>

using namespace std;

const int A_PRICE = 15;
const int B_PRICE = 12;
const int C_PRICE = 9;

int main(int argc, char** argv) {

  //Ask user how many of each class of ticket were sold.
    int A, B, C;   //Numbers of tickets by class
    cout << "How many class A tickets were sold?" << endl;
    cin >> A;
    cout << "How many class B tickets were sold?" << endl;
    cin >> B;
    cout << "How many class C tickets were sold?" << endl;
    cin >> C;

    //Calculate total income.
    float income = A * A_PRICE + B * B_PRICE + C * C_PRICE;

    //Display income.
    cout << "The total income is $"
         << setprecision(2) << fixed
         << income << endl;

    return 0;
}

