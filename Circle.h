#pragma once

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        // Default constructor
        Circle();

        // Overloaded constructor
        Circle(float radius);

        // Destructor
        ~Circle();

        // Accessor methods
        void setRadius(float radius);
        float getRadius() const;
    };
}
