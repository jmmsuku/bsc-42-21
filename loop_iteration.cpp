#include <iostream>
#include <limits>

using namespace std;

int main()
 {
    int input;

    // Loop until a valid input between 5 and 10 is entered
    while (true) {
        // Prompt the user for an integer value between 5 and 10
        cout << "Enter an integer value between 5 and 10: ";
        
        // Check if input is a valid integer
        if (!(cin >> input)) {
            // If input is not a valid integer, clear input stream and ignore invalid characters
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Sorry, you entered an invalid number. Please try again." << endl;
        } else if (input >= 5 && input <= 10) {
            // If input is between 5 and 10, exit loop
            break;
        } else {
            // If input is not between 5 and 10, prompt again
            cout << "You entered " << input << ". Please enter a number between 5 and 10." << endl;
        }
    }

    // Output a message to inform the user that their input value has been accepted
    cout << "Your input value (" << input << ") has been accepted." << endl;

    return 0;
}