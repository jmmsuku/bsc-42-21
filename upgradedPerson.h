#pragma once

#include <string>

using namespace std;

class Person {
public:
    // Constructors
    Person();
    Person(string firstName, float weight, int age);

    // Destructor
    ~Person();

    // Operator overloads
    float operator+(const Person &otherPerson);

    bool operator==(const Person &otherPerson);
    bool operator!=(const Person &otherPerson);

    bool operator<(const Person &otherPerson);
    bool operator>(const Person &otherPerson);

    // Conversion operators
    operator int();       // Convert to int (age)
    operator string();    // Convert to string (first name)
    operator float();     // Convert to float (weight)

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
