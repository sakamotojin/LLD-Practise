//
// Created by Sakamoto Jin on 4/8/2021.
//
#include <algorithm>
#include "RentalSystem.h"

RentalSystem* RentalSystem::rentalSystem = NULL;

RentalSystem::RentalSystem() {
    vehicleManager = new VehicleManager();
    bookingManager = new BookingManager();

    // Testing data can be inserted Here
    vehicleManager->addVehicle(VehicleType::CAR,123);
    vehicleManager->addVehicle(VehicleType::BIKE,1223);
    vehicleManager->addVehicle(VehicleType::TRUCK,1231);
    vehicleManager->addVehicle(VehicleType::BIKE,122);

}

Vehicle* RentalSystem::getVehicleById(int id){
    vehicleManager->getVehicleById(id);
}

 Booking * RentalSystem::getBookingById(int id){
    bookingManager->getBookingById(id);
}

std::vector<int> RentalSystem::getFreeVehiclesForSlot(SLOTS slot, bool SortedByFare) {
    auto vehicles = vehicleManager->getVehicleList();
    std::vector<int> freeVehicles ;
    for(auto &i : vehicles){
        if(!bookingManager->checkBookingExists(i , slot)) freeVehicles.push_back(i);
    }
    if(SortedByFare) std::sort(freeVehicles.begin(), freeVehicles.end());
    return freeVehicles;
}


std::vector<int> RentalSystem::getFreeVehiclesForTypeAndSLot(VehicleType Type, SLOTS slot, bool SortedByFare) {
    auto vehicles = vehicleManager->getVehiclesByType(Type);
    std::vector<int> freeVehicles ;
    for(auto &i : vehicles){
        if(!bookingManager->checkBookingExists(i , slot)) freeVehicles.push_back(i);
    }
    if(SortedByFare) std::sort(freeVehicles.begin(), freeVehicles.end(), Vehicle::);
    return freeVehicles;
}

std::vector<int> RentalSystem::getALLBookings() {
    return bookingManager->getAllBookings();
}

int RentalSystem::bookVehicle(int vehicleId, SLOTS slot) {
    double fare = vehicleManager->getVehicleById(vehicleId)->getFare();
    return bookingManager->bookVehicleForSlot(vehicleId,slot,fare);
}

int RentalSystem::cancelBooking(int bookingId) {
    return 0;
}



