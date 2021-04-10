//
// Created by Sakamoto Jin on 4/8/2021.
//

#ifndef RENTALSYSTEM_VEHICLEFACTORY_H
#define RENTALSYSTEM_VEHICLEFACTORY_H

#include "../Utils/VehcileInfo.h"
#include "../Models/Vehicle.h"
#include "../Models/Bike.h"
#include "../Models/Car.h"
#include "../Models/Truck.h"


class VehicleFactory {

public:
    static Vehicle* getVehicle(int id , VehicleType Type , double fare){
        switch (Type) {
            case VehicleType::BIKE:
                return new Bike(id, fare);
            case VehicleType::CAR:
                return new Car(id, fare);
            case VehicleType::TRUCK:
                return new Truck(id, fare);
            default:
                return NULL;
        }
    }

};


#endif //RENTALSYSTEM_VEHICLEFACTORY_H
