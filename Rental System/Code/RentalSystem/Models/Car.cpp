//
// Created by Sakamoto Jin on 4/8/2021.
//
#include <iostream>
#include "Car.h"

VehicleType Car::getVehicleType() {
    return VehicleType::CAR;
}

Car::Car(int id , double fare) : Vehicle(id , fare) {
    std::cout << " CAR Added \t" << id << "\n";
}