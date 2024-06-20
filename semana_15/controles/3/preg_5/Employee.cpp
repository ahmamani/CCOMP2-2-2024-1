#include <iostream>
#include "Employee.h"

// (a)  Maricielo
unsigned int Employee::count=0;

Employee::Employee(const std::string &first, const std::string &last) :
       firstName(first), lastName(last){
    ++count;
}

Employee::~Employee() {
    --count;    
}

// ((a) funciones de acceso 
std::string Employee::getFirstName() const {
    return firstName;
}

std::string Employee::getLastName() const {
    return lastName;
}

unsigned int Employee::getCount() {
    return count;
}