/*Gaddis Chapter 3 problem 12
 * Software Purchase
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int UnitsSold;
    
    //User input.
    cout << "How many units sold: ";
    cin >> UnitsSold;
 
    //Compute discount
    float Discount = 0;
    if( UnitsSold >= 10 && UnitsSold <= 19 )
        Discount = 20;
    else if( UnitsSold >= 20 && UnitsSold <= 49 )
        Discount = 30;
    else if( UnitsSold >= 50 && UnitsSold <= 99 )
        Discount = 40;
    else if( UnitsSold > 100 )
        Discount = 50;

    //Comput purchase amount.
    float amount = 99 * UnitsSold * ( 1 - Discount/100.0 );
    cout << "Purchase amount is $" << amount << "" << endl;
    
    return 0;
}

