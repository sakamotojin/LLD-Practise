//
// Created by Sakamoto Jin on 4/8/2021.
//

#include "BookingManager.h"



bool BookingManager::checkBookingExists(int vehicleId , SLOTS slot){
    return (BookedVehicles.find({vehicleId , slot}) != BookedVehicles.end());
}

Booking* BookingManager::getBookingById(int bookingId){
    return BookingIdToBookingIfo[bookingId];
}

int BookingManager::bookVehicleForSlot(int VehicleId, SLOTS slot, double fare) {

    if(checkBookingExists(VehicleId , slot)) return -1;
    BookingIdToBookingIfo[currentBookingId] = new Booking(currentBookingId , VehicleId , slot , fare);
    BookedVehicles[{VehicleId , slot}] = currentBookingId;
    currentBookingId += 1;
    return currentBookingId -1;

}

int BookingManager::getBookingId(int vehicleId , SLOTS slot){
    if(checkBookingExists(vehicleId , slot))
        return BookedVehicles[{vehicleId , slot}];
    return -1;
}



std::vector<int> BookingManager::getAllBookings(){
    std::vector<int> bookingIds ;
    for(auto &i : BookingIdToBookingIfo) bookingIds.push_back(i.first);
    return bookingIds;
}

BookingManager::BookingManager() {
    currentBookingId = 1;
}
