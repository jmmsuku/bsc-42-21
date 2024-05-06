#pragma once

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        // Default constructor
        Triangle();

        // Overloaded constructor
        Triangle(float base, float height);

        // Destructor
        ~Triangle();

        // Accessor methods
        void setBase(float base);
        void setHeight(float height);
        float getBase() const;
        float getHeight() const;
    };
}
