#include "Triangle.h"

namespace shapes {
    // Default constructor
    Triangle::Triangle() : base(0.0f), height(0.0f) {}

    // Overloaded constructor
    Triangle::Triangle(float b, float h) : base(b), height(h) {}

    // Destructor
    Triangle::~Triangle() {}

    // Accessor methods
    void Triangle::setBase(float b) {
        base = b;
    }

    void Triangle::setHeight(float h) {
        height = h;
    }

    float Triangle::getBase() const {
        return base;
    }

    float Triangle::getHeight() const {
        return height;
    }
}
