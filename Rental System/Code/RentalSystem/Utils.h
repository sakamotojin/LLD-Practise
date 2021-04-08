//
// Created by Sakamoto Jin on 4/8/2021.
//
#include "VehcileInfo.h"
#include <string>


#ifndef RENTALSYSTEM_UTILS_H
#define RENTALSYSTEM_UTILS_H


std::string convertVehicleTyeToString(VehicleType Type);


std::string convertSlotToString(SLOTS Type);

SLOTS getCurrentSlot();

#endif //RENTALSYSTEM_UTILS_H
