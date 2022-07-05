/*Savitch - Chp2 - Prob9  (similar to).
 This program will ask for 10 numbers. It will then find the sum
 of the positive number, the sum of the negative numbers, and
 overall sum.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  //Get 10 numbers from the user.
  //We can't use an array or loops!
  int SumPos = 0, SumNeg = 0, OverallSum = 0;
  int n;
  
  //Number 1
  cout << "Enter number 1: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 2
  cout << "Enter number 2: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 3
  cout << "Enter number 3: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 4
  cout << "Enter number 4: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 5
  cout << "Enter number 5: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

    //Number 6
  cout << "Enter number 6: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 7
  cout << "Enter number 7: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 8
  cout << "Enter number 8: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 9
  cout << "Enter number 9: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Number 10
  cout << "Enter number 10: ";
  cin >> n;
  OverallSum += n;

  if( n > 0 )        //If the number's positive....
      SumPos += n;   //Add it to SumPos
  else
      SumNeg += n;   //Else add to SumNeg

  //Print out the totals of the 3 sums.
  cout << "Sum of Positive numbers: " << SumPos << endl;
  cout << "Sum of Negative numbers: " << SumNeg << endl;
  cout << "            Overall sum: " << OverallSum << endl;

  return 0;
}

