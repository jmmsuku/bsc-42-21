#include "Circle.h"

namespace shapes {
    // Default constructor
    Circle::Circle() : radius(0.0f) {}

    // Overloaded constructor
    Circle::Circle(float r) : radius(r) {}

    // Destructor
    Circle::~Circle() {}

    // Accessor methods
    void Circle::setRadius(float r) {
        radius = r;
    }

    float Circle::getRadius() const {
        return radius;
    }
}
