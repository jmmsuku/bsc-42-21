#include "Rectangle.h"

// Default constructor
Rectangle::Rectangle() : length(0.0), width(0.0) {}

// Overloaded constructor to initialize length and width
Rectangle::Rectangle(float l, float w) : length(l), width(w) {}

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

// Method to calculate area
float Rectangle::calculateArea() const {
    return length * width;
}
