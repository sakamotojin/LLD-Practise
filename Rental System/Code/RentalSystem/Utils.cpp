//
// Created by Sakamoto Jin on 4/8/2021.
//

#include "Utils.h"

std::string convertVehicleTyeToString(VehicleType Type){
if(Type == VehicleType::CAR) return "CAR";
if(Type == VehicleType::BIKE) return "BIKE";
if(Type == VehicleType::TRUCK) return "TRUCK";
}

std::string convertSlotToString(SLOTS Type){
    if(Type == SLOTS::MORNING) return "MORNING";
    if(Type == SLOTS::AFTERNOON) return "AFTERNOON";
    if(Type == SLOTS::EVENING) return "EVENING";
}


SLOTS getCurrentSlot(){
    return SLOTS::AFTERNOON;
}