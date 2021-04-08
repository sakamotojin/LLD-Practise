cmake_minimum_required(VERSION 3.17)
project(RentalSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(RentalSystem main.cpp  RentalSystem.cpp RentalSystem.h Vehicle.h VehcileInfo.h Bike.cpp Bike.h Car.cpp Car.h Truck.cpp Truck.h VehicleManager.cpp VehicleManager.h  VehicleFactory.h BookingManager.cpp BookingManager.h Booking.cpp Booking.h Utils.cpp)

