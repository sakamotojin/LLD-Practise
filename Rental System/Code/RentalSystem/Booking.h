//
// Created by Sakamoto Jin on 4/8/2021.
//
#include "VehcileInfo.h"
#include <iostream>
#include "Utils.h"
#ifndef RENTALSYSTEM_BOOKING_H
#define RENTALSYSTEM_BOOKING_H


class Booking {
private:
    int bookingId;
    int vehicleId;
    SLOTS Slot;
    double fare;

public:
    Booking() = delete;
    Booking(int bookingId , int vehicleId , SLOTS slot , double fare);

    void printBookingDetails(){
        std::cout << " { Booking Id : " << bookingId << '\n'
                  <<  "  VehicleId  : " << vehicleId << '\n'
                  << " Slot : " << convertSlotToString(Slot) << " }\n";
    }
    int getBookingId(){return bookingId;}

};


#endif //RENTALSYSTEM_BOOKING_H
