#pragma once

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static float calculateSquareArea(const shapes::Square& square);
    static float calculateTriangleArea(const shapes::Triangle& triangle);
    static float calculateCircleArea(const shapes::Circle& circle);
};
