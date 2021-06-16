/******************************************************************************=
                          My First C++ File
                          Demo of Inputs/Outputs
                             6.14.2021
*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{
    int age;      //variable to hold a users age
    string name;  //variable to hold a users name

// prompt the user for thier name
    cout << "What is your name?";
    getline(cin, name); //allows for the user to enter thier name with spaces
    
// prompt the user for their age 
    cout <<"What is your age?";
    cin >> age; //allows for the user to enter their age
    
// display the users name and age
    cout << endl << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    
    
    
    
  return 0;
}
