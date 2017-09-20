//
// Created by Owner on 9/15/2017.
//

#include "Person.h"

Person::Person(string name, int age) : name(move(name)), age(age){

}

Person::Person() : name(""), age(0) {

}

/** Deep copy constructor   */
Person::Person(const Person &other) {
    name = other.name;
    age = other.age;
}

void Person::Print() const {
    cout << name << ": " << age << endl;
}

bool Person::operator<(const Person &p) const {
    if(name == p.name) {
        return age < p.age;
    }
    return name < p.name;
}

bool Person::operator==(const Person &p) const {
    return name == p.name && age < p.age;
}

bool Person::operator>(const Person &p) const {
    if(name == p.name) {
        return age > p.age;
    }
    return name > p.name;
}

bool Person::operator>=(const Person &p) const {
    return name >= p.name && age >= p.age;
}

bool Person::operator<=(const Person &p) const {
    return name <= p.name && age <= p.age;
}

bool Person::operator!=(const Person &p) const {
    if(name == p.name) {
        return age != p.age;
    }
    return name != p.name;
}

int Person::Compare(Person &p) {
    if (this < &p) {
        return -1;
    }

    if(this == &p) {
        return 0;
    }

    return 1;

}
