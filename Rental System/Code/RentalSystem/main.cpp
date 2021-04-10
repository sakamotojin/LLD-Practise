#include <iostream>
#include "Controller/RentalSystem.h"

RentalSystem* MyRentalSystem;


void displayAllBookings(){
    auto v = MyRentalSystem->getALLBookings();
    std::cout << "Bookings\n";
    for(auto i : v) {
        std::cout << i << " ";
        MyRentalSystem->displayBookingDetails(i);
    }
}

void displayALLVechicles(){
    auto vv = MyRentalSystem->getFreeVehiclesForSlot(SLOTS::MORNING);
    std::cout << "Vehicles\n";
    for(auto i : vv) {
        std::cout << i << " \n";
        MyRentalSystem->displayVehicleDetails(i) ;
        std::cout << '\n';
    }
}

int main() {

    MyRentalSystem = RentalSystem::getInstance();

    displayALLVechicles();
    displayAllBookings();
    MyRentalSystem->bookVehicle(1 , SLOTS::AFTERNOON);
    displayAllBookings();
    displayALLVechicles();



    return 0;
}
