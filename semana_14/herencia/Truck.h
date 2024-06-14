#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
        std::string capacity;
    public:
        Truck(const std::string &myLicense, const int myYear,
                const std::string &myCapacity) :
                Vehicle(myLicense, myYear), capacity(myCapacity) {}
        
        const std::string getDesc() const {
            std::ostringstream output;
            output << year << " " << capacity << "Ton. " <<
                    license;
            return output.str();
        }
        const std::string &getCapacity() const {
            return capacity;
        }
};

#endif