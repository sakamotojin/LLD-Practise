//
// Created by Sakamoto Jin on 4/8/2021.
//
#include "Vehicle.h"
#ifndef RENTALSYSTEM_TRUCK_H
#define RENTALSYSTEM_TRUCK_H


class Truck: public Vehicle {
public:
Truck(int id , double fare);
VehicleType getVehicleType() override;
};


#endif //RENTALSYSTEM_TRUCK_H
