#include "Box.h"
#include <iostream>

int main() {
    Box Box1;
    Box Box2;
    Box Box3;
    double volume = 0.0;

    // Box1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // Box2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // Volume of Box1
    volume = Box1.GetVolume();
    std::cout << "Volume of Box1: " << volume << std::endl;

    // Volume of Box2
    volume = Box2.GetVolume();
    std::cout << "Volume of Box2: " << volume << std::endl;

    // Add two objects
    Box3 = Box1 + Box2;

    // Volume of Box3
    volume = Box3.GetVolume();
    std::cout << "Volume of Box3: " << volume << std::endl;

    return 0;
}
