/******************************************************************************=
                          My First C++ File
                          Demo of Variables
                             6.14.2021
*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{
    int number= 12;          //whole numbers
    double number2= 15.5;   //decimals
    char letter= 'A';        //single letter, single quotations
    string phrase= "ABCD";   //double quotes for multiple letters
    bool valid= true;       //true or false
    
    
  cout << number << endl;       // this is the integer variable value 
  cout << number2 << endl;      //this is the double variable value 
  cout << letter << endl;       //this is the character variable value
  cout << phrase << endl;       //this is a string variable value 
  cout << valid << endl;         //this is a boolean variable value

  return 0;
}
