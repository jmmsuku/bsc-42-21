#include <iostream>
#include "Rectangle.h"

int main() {
    // Create the first instance with the default constructor
    Rectangle rect1;

    // Get user input for length and width for rect1
    float length, width;

    std::cout << "Enter the length for the first rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width for the first rectangle: ";
    std::cin >> width;

    // Set the length and width in the first rectangle instance
    rect1.setLength(length);
    rect1.setWidth(width);

    // Calculate and display the area of the first rectangle
    float area1 = rect1.calculateArea();
    std::cout << "The area of the first rectangle is: " << area1 << std::endl;

    // Create the second instance with the overloaded constructor
    std::cout << "\nEnter the length for the second rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width for the second rectangle: ";
    std::cin >> width;

    // Use the overloaded constructor to create the second rectangle
    Rectangle rect2(length, width);

    // Calculate and display the area of the second rectangle
    float area2 = rect2.calculateArea();
    std::cout << "The area of the second rectangle is: " << area2 << std::endl;

    return 0;
}
