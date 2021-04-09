//
// Created by Sakamoto Jin on 4/8/2021.
//

#include "Booking.h"

Booking::Booking(int bookingId, int vehicleId, SLOTS slot, double fare) {
    this->bookingId = bookingId , this->vehicleId = vehicleId , this->Slot = slot , this->fare = fare;
}
