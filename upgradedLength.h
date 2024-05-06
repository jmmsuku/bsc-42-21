#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle();

    // Overloaded constructor
    Rectangle(float l, float w);

    // Destructor
    ~Rectangle();

    // Accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    // Method to calculate area
    float calculateArea() const;
};
