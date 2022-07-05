/*Savitch - Chapter 2 - Problem 1
  Diet soda problem.
 */

#include <iostream>

using namespace std;

const double SWEETENER_FRACTION = 0.001;
const double SODA_CAN_MASS = 350;  //grams

int main(int argc, char** argv) {
    double amt_to_kill_mouse = 5.00;   //5 grams
    double mouse_weight = 35.00;       //35 grams
    double dieter_weight;

    //Get weight of dieter.
    cout << "Enter the weight of the dieter (in grams): ";
    cin >> dieter_weight;
 
    //Calculate lethal amount of sweetener.
    //First, calculate the lethal proportion to kill the mouse.
    //Then calculate the lethal amount to kill the human.
    double lethal_prop = amt_to_kill_mouse / mouse_weight;
    double lethal_amt = lethal_prop * dieter_weight;
    
    //Now figure out how many cans of soda contain this lethal amount.
    float num_cans = lethal_amt / (SWEETENER_FRACTION * SODA_CAN_MASS);
    
    //Output the result;
    cout << "It would take " << num_cans << " cans of soda to kill the dieter."
         << endl;
    
    return 0;
}

