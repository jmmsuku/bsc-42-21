#include <iostream> // for input and output strings
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main()
 {
    // establish the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 0 and 11 
    int daysUntilExpiration = rand() % 12;

    // Check conditions using a switch statement and output appropriate message
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
             cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}