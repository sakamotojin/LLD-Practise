//
// Created by Sakamoto Jin on 4/8/2021.
//

#include "Vehicle.h"

#ifndef RENTALSYSTEM_BIKE_H
#define RENTALSYSTEM_BIKE_H


class Bike : public Vehicle {
public:
    Bike(int id , double fare);
    VehicleType getVehicleType() override;
};


#endif //RENTALSYSTEM_BIKE_H
