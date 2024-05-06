#pragma once

namespace shapes {
    class Square {
    private:
        float side_length;

    public:
        // Default constructor
        Square();

        // Overloaded constructor
        Square(float side);

        // Destructor
        ~Square();

        // Accessor methods
        void setSideLength(float side);
        float getSideLength() const;
    };
}
