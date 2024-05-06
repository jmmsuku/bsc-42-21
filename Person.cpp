#include "Person.h"

// Default constructor
Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

// Parameterized constructor
Person::Person(string firstName, float weight, int age)
    : mFirstName(firstName), mWeight(weight), mAge(age) {}

// Destructor
Person::~Person() {}

// Operator overloads
float Person::operator+(const Person &otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person &otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person &otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

bool Person::operator<(const Person &otherPerson) {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person &otherPerson) {
    return this->mAge > otherPerson.mAge;
}
