//
// Created by Sakamoto Jin on 4/8/2021.
//

#include <iostream>
#include "Truck.h"


VehicleType Truck::getVehicleType() {
    return VehicleType::TRUCK;
}

Truck::Truck(int id , double fare) : Vehicle(id , fare) {
    std::cout << " TRUCK Added \t" << id << "\n";
}