#include "Square.h"

namespace shapes {
    // Default constructor
    Square::Square() : side_length(0.0f) {}

    // Overloaded constructor
    Square::Square(float side) : side_length(side) {}

    // Destructor
    Square::~Square() {}

    // Accessor methods
    void Square::setSideLength(float side) {
        side_length = side;
    }

    float Square::getSideLength() const {
        return side_length;
    }
}
