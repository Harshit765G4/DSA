#include <iostream>

using namespace std;

int main() {
    int num; 
    cout << "Enter a number: ";
    cin >> num; 
    
    
    if (num < 0) {
        cerr << "Factorial is not defined for negative numbers." << endl;
        return 1; 
    }
    
    long long fact = 1; 
    int i = 1; 
    
    
    do {
        fact *= i;
        i++;
    } while (i <= num);
    
    
    cout << "Factorial of " << num << " is " << fact << endl;
    return 0;
}
