//
// Created by Sakamoto Jin on 4/8/2021.
//
#include <iostream>
#include "Utils.h"
#include "VehcileInfo.h"
#ifndef RENTALSYSTEM_VEHICLE_H
#define RENTALSYSTEM_VEHICLE_H

#include <map>

class Vehicle {
private:
    int id;
    double fare;

public:
    Vehicle(int id1 , double fare1){
        id = id1;
        fare = fare1;

    }
    int getId(){
        return this->id;
    }
    void setId(int id){
        this->id = id;
    }
    double getFare(){return fare;}

    void print(){
        std::cout << id ;
        std::cout << " Vehicle { Id : "
        << id << " , Fare : "
        << fare << " Type : "
        << convertVehicleTyeToString(getVehicleType());
    }
    virtual VehicleType getVehicleType() = 0;

};


#endif //RENTALSYSTEM_VEHICLE_H
