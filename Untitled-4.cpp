#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0.0), width(0.0) {}

// Destructor
Rectangle::~Rectangle() {}

// Accessor methods for length and width
void Rectangle::setLength(float l) {
    length = l;
}

void Rectangle::setWidth(float w) {
    width = w;
}

float Rectangle::getLength() const {
    return length;
}

float Rectangle::getWidth() const {
    return width;
}

// Calculate the area of the rectangle
float Rectangle::calculateArea() const {
    return length * width;
}
