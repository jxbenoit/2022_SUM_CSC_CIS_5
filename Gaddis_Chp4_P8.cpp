/*Gaddis - Chapter 4 - Problem 8
  Color Mixer
*/

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Have user enter names of two colors.
    string color1, color2, color3;
    cout << "Please enter the names of two primary colors: ";
    cin >> color1 >> color2;

    //Check the user entered proper color names.
    if( color1 != "blue" && color1 != "red" && color1 != "yellow" ) {
    //if( ! (color1 == "blue" || color1 == "red" || color1 == "yellow") )
        cout << "You must enter blue, red, or yellow." << endl;
        return 1;
    }
    if( color2 != "blue" && color2 != "red" && color2 != "yellow" ) {
        cout << "You must enter blue, red, or yellow." << endl;
        return 1;
    }
    
    //'Mix' colors together & get resulting color.
    if( (color1 == "red" && color2 == "blue") ||
        (color1 == "blue" && color2 == "red") )
        color3 = "purple";
    else if( (color1 == "red" && color2 == "yellow") ||
        (color1 == "yellow" && color2 == "red") )
        color3 = "orange";
    else color3 = "green";
    
    //Output result
    cout << "The combined colors make " << color3 << endl;
    
    return 0;
}

