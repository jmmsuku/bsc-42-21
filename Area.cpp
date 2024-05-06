#include "Area.h"
#include <cmath> // For M_PI and math operations

float Area::calculateSquareArea(const shapes::Square& square) {
    return square.getSideLength() * square.getSideLength();
}

float Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}

float Area::calculateCircleArea(const shapes::Circle& circle) {
    return M_PI * circle.getRadius() * circle.getRadius();
}
