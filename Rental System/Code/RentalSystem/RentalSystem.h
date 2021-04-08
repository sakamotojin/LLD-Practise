//
// Created by Sakamoto Jin on 4/8/2021.
//

#include <iostream>
#include <vector>
#include <set>
#include "BookingManager.h"
#include "VehicleManager.h"
#ifndef RENTALSYSTEM_RENTALSYSTEM_H
#define RENTALSYSTEM_RENTALSYSTEM_H


class RentalSystem {
private :
    VehicleManager *vehicleManager = NULL;
    BookingManager *bookingManager = NULL;
    static RentalSystem* rentalSystem ;
    RentalSystem();

public:

    static RentalSystem* getInstance(){
        if(!rentalSystem) rentalSystem = new RentalSystem();
        return rentalSystem;
    }


    std::vector<int> getFreeVehiclesForSlot(SLOTS slot , bool SortedByFare= false);

    std::vector<int> getFreeVehiclesForTypeAndSLot(VehicleType Type , SLOTS slot=getCurrentSlot(), bool SortedByFare= false);

    std::vector<int> getALLBookings();

    Vehicle* getVehicleById(int id);

    Booking * getBookingById(int id);

    int bookVehicle(int vehicleId , SLOTS slot);

    void displayVehicleDetails(int vehilceid){
        vehicleManager->getVehicleById(vehilceid)->print();
    }

    void displayBookingDetails(int bookingId){
        bookingManager->getBookingById(bookingId)->printBookingDetails();
    }

    int cancelBooking(int bookingId);

};


#endif //RENTALSYSTEM_RENTALSYSTEM_H
