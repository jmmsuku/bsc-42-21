#include <iostream>

using namespace std;

// Function prototypes
float calculateTriangleArea(float base, float height);
float calculateRectangleArea(float length, float width);
float calculateSquareArea(float side);

int main() {
    char choice;
    float base, height, length, width, side;

    while (true) {
        cout << "Select a shape to calculate the area:" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit program" << endl;
        cout << "--------------------------------------" << endl;
        cout << "Enter  selection: ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter base and height of the triangle: ";
                cin >> base >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            case '2':
                cout << "Enter length and width of the rectangle: ";
                cin >> length >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            case '3':
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
            case '4':
                cout << "you have chosen to quit, good luck!!" << endl;
                return 0; 
            default:
                cout << "Your input was: " << choice << " which is an invalid input. Please enter a valid input!!!" << endl;
        }
    }

    return 0;
}

// Function definitions
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

float calculateRectangleArea(float length, float width) {
    return length * width;
}

float calculateSquareArea(float side) {
    return side * side;
}