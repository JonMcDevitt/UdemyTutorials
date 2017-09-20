//
// Created by Owner on 9/15/2017.
//

#ifndef STANDARDTEMPLATELIBRARY_PERSON_H
#define STANDARDTEMPLATELIBRARY_PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string name, int age);

    Person();

    /** Deep copy constructor   */
    Person(const Person &other);

    void Print() const;

    /** Operator overload   */
    bool operator<(const Person &p) const;

    bool operator==(const Person &p) const;

    bool operator>(const Person &p) const;

    bool operator>=(const Person &p) const;

    bool operator<=(const Person &p) const;

    bool operator!=(const Person &p) const;

    int Compare(Person &p);
};


#endif //STANDARDTEMPLATELIBRARY_PERSON_H
