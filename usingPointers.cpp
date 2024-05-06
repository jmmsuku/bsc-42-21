#include <iostream> // Required for input/output operations
using namespace std; // Simplifies code by avoiding std:: prefix

// Function to swap the values of two integers using pointers
void swapNumbers(int* a, int* b) {
    int temp = *a; // Dereference 'a' to get its value and store in 'temp'
    *a = *b;       // Assign the dereferenced value of 'b' to 'a'
    *b = temp;     // Assign the stored value of 'temp' to 'b'
}

int main() {
    int varA = 25; // Declare and initialize 'varA'
    int varB = 100; // Declare and initialize 'varB'

    // Output the initial values of 'varA' and 'varB'
    cout << "varA before swap: " << varA << endl; // Expected: 25
    cout << "varB before swap: " << varB << endl; // Expected: 100

    // Call 'swapNumbers' with pointers to 'varA' and 'varB'
    swapNumbers(&varA, &varB);

    // Output the values of 'varA' and 'varB' after the swap
    cout << "varA after swap: " << varA << endl; // Expected: 100
    cout << "varB after swap: " << varB << endl; // Expected: 25

    return 0; // Indicate successful program execution
}v