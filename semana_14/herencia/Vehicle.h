#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <sstream>

class Vehicle {
    protected:
        std::string license;
        int year;
    public:
        Vehicle(const std::string &myLicense, const int myYear)
                : license(myLicense), year(myYear) {}
        virtual const std::string getDesc() const = 0;
        const std::string &getLicense() const {
            return license;
        }
        const int getYear() const {
            return year;
        }
};

#endif