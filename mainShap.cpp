#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"

int main() {
    using namespace std; // Use this within the scope of main function

    while (true) {
        cout << "Choose an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";

        int choice;
        cin >> choice;

        if (choice == 4) {
            cout << "Quitting program.\n";
            break; // Exit the loop and end the program
        }

        switch (choice) {
            case 1: {
                cout << "Enter the side length of the square: ";
                float side;
                cin >> side;
                shapes::Square square(side);
                float area = Area::calculateSquareArea(square);
                cout << "The area of the square is: " << area << endl;
                break;
            }
            case 2: {
                cout << "Enter the base of the triangle: ";
                float base;
                cin >> base;
                cout << "Enter the height of the triangle: ";
                float height;
                cin >> height;
                shapes::Triangle triangle(base, height);
                float area = Area::calculateTriangleArea(triangle);
                cout << "The area of the triangle is: " << area << endl;
                break;
            }
            case 3: {
                cout << "Enter the radius of the circle: ";
                float radius;
                cin >> radius;
                shapes::Circle circle(radius);
                float area = Area::calculateCircleArea(circle);
                cout << "The area of the circle is: " << area << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    }

    return 0;
}
