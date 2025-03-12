/*
Write a C++ program to compute the factorial of a non-negative integer using a do-while loop.
If the input is negative, display an error message. 
The program should take user input, compute the factorial, and print the result.
*/

#include <iostream>

using namespace std;

int main() {
    int num; // Variable to store user input
    cout << "Enter a number: ";
    cin >> num; // Taking input from the user
    
    // Checking if the input number is negative
    if (num < 0) {
        cerr << "Factorial is not defined for negative numbers." << endl;
        return 1; // Indicating an error
    }
    
    long long fact = 1; // Variable to store factorial result
    int i = 1; // Counter variable for loop
    
    // Loop to calculate factorial using do-while loop
    do {
        fact *= i;
        i++;
    } while (i <= num);
    
    // Displaying the factorial result
    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;
}
