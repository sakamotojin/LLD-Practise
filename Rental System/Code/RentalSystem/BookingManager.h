//
// Created by Sakamoto Jin on 4/8/2021.
//
#include <vector>
#include <map>
#include <set>
#include "VehcileInfo.h"
#include "Vehicle.h"
#include "Booking.h"

#ifndef RENTALSYSTEM_BOOKINGMANAGER_H
#define RENTALSYSTEM_BOOKINGMANAGER_H

/*
 * Books A trip {Id , Slot , fare}
 * Checks A vehicle for a slot is booked
 *
 *
 */

class BookingManager {


private:
    int currentBookingId;
    std::map<int , Booking*> BookingIdToBookingIfo;
    std::map<std::pair<int , SLOTS> , int> BookedVehicles;


public:
    BookingManager();

    int bookVehicleForSlot(int VehicleId , SLOTS slot, double  fare);

    bool checkBookingExists(int vehicleId , SLOTS slot);

    Booking* getBookingById(int bookingId);

    int getBookingId(int vehicleId , SLOTS slot);

    std::vector<int> getAllBookings();

};


#endif //RENTALSYSTEM_BOOKINGMANAGER_H
