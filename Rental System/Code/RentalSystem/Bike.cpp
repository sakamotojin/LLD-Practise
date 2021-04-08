//
// Created by Sakamoto Jin on 4/8/2021.
//
#include <iostream>
#include "Bike.h"

VehicleType Bike::getVehicleType() {
    return VehicleType::BIKE;
}

Bike::Bike(int id , double fare) : Vehicle(id , fare) {
    std::cout << " BIKE Added \t" << id << "\n";
}