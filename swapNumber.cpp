#include <iostream> 
using namespace std; 

// Function to swap the values of two integers using references
void swapNumbers(int& a, int& b) {
    int temp = a; // Store the value of 'a' in a temporary variable
    a = b;        // Assign the value of 'b' to 'a'
    b = temp;     // Assign the stored value of 'a' to 'b'
}

int main() {
    int varA = 25; // Declare and initialize 'varA'
    int varB = 100; // Declare and initialize 'varB'

    // Output the initial values of 'varA' and 'varB'
    cout << "varA before swap: " << varA << endl; // Expected: 25
    cout << "varB before swap: " << varB << endl; // Expected: 100

    // Call 'swapNumbers' to swap the values of 'varA' and 'varB'
    swapNumbers(varA, varB);

    // Output the values of 'varA' and 'varB' after the swap
    cout << "varA after swap: " << varA << endl; // Expected: 100
    cout << "varB after swap: " << varB << endl; // Expected: 25

    return 0; // Indicate successful program execution
}