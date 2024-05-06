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

private:
    float mWeight;
    string mFirstName;
    int mAge;
};
