#include <iostream> // for the input and output strings
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() 
{
    // establish the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 0 and 11 
    int daysUntilExpiration = rand() % 12;

    // Check conditions and output appropriate message
    if (daysUntilExpiration == 0) 
        cout << "Your subscription has expired." << endl;

     else if (daysUntilExpiration == 1) 
     {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    }
     else if (daysUntilExpiration <= 5)
      {
        cout << "Your subscription expires in " <<daysUntilExpiration << " days." << endl;
        cout << "Renew now and save 10%!" << endl;
    }

    else if (daysUntilExpiration <= 10)
    { 
    cout<<"Days until expiration: "<<daysUntilExpiration<< " days"<<endl;
        cout << "Your subscription will expire soon. Renew now!" << endl;
    }

    else 
        cout << "You have an active subscription." << endl;
    

    return 0;
}