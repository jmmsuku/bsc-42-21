#include <iostream>
#include "Rectangle.h"

int main() {
    // Create a rectangle instance
    Rectangle rect;

    // Get user input for length and width
    float length, width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Set the length and width in the rectangle instance
    rect.setLength(length);
    rect.setWidth(width);

    // Calculate and display the area of the rectangle on console
    float area = rect.calculateArea();
    std::cout << "The area of the rectangle is: " << area << std::endl;

    return 0;
}
