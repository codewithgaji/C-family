#include <iostream>
#include <string> // We need to import string lib to be able to use it in c++ code
using namespace std;


// Defining a Student class
class Student {
public:
  string name; // These are variables we declared publicly - meaning it can be accessed by any other class not even inside the class as a sub/child class
  int age;
  string department;

  // THIS IS A FUNCTION(METHOD) INHERITING FROM THE CLASS AND USING ITS PROPERTIES
  void displayinfo() {
    cout << "Name: " << name << endl; // The "cout" means 'c output' but shorten
    cout << "Age: " << age << endl;
    cout << "Department: " << department << endl;
  }
};


int main() {
  // We are creating an object from the class name here
  Student s1; // "s1" is like a container or variable we are using to store the values we are giving the FUNCTION
  s1.name = "Mauton Asokere";
  s1.age = 20; // ALWAYS end your code with a semi-colon(;)
  s1.department = "Computer Science";

  s1.displayinfo(); // we are using this to display(or call) the values we stored in the FUNCTION

  return 0; // This is used by "int" to confirm if the program ran/runs successfully 
}

