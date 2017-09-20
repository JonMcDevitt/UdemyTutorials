//
// Created by Owner on 9/14/2017.
//

#ifndef STANDARDTEMPLATELIBRARY_INPUTEXCEPTION_H
#define STANDARDTEMPLATELIBRARY_INPUTEXCEPTION_H

using namespace std;

#include <exception>
#include <string>

class InputException : public exception{
private:
    string message;
public:
    explicit InputException(const string& message);

    const char* what() const throw() override {
        return message.c_str();
    }

};


#endif //STANDARDTEMPLATELIBRARY_INPUTEXCEPTION_H
