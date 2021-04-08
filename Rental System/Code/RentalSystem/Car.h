//
// Created by Sakamoto Jin on 4/8/2021.
//
#include "Vehicle.h"
#ifndef RENTALSYSTEM_CAR_H
#define RENTALSYSTEM_CAR_H


class Car : public Vehicle {
        public:
        Car(int id , double fare);
        VehicleType getVehicleType() override;
};


#endif //RENTALSYSTEM_CAR_H
