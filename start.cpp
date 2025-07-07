#include <iostream> // Always need to be imported
using namespace std;

// First function: prints a welcome message
void greet() {
    cout << "Welcome to CSC 226 Programming Class!" << endl;
}

// Second function: adds two numbers and prints the result
void addNumbers(int a, int b) {
    cout << "Sum: " << (a + b) << endl;
}

// main() is where we call the functions
int main() {
    greet();            // Call the greet() function
    addNumbers(5, 7);   // Call the addNumbers() function with arguments 5 and 7
    return 0;
}
