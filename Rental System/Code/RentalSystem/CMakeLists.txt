cmake_minimum_required(VERSION 3.17)
project(RentalSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(RentalSystem main.cpp Controller/RentalSystem.cpp Controller/RentalSystem.h Models/Vehicle.h Utils/VehcileInfo.h Models/Bike.cpp Models/Bike.h Models/Car.cpp Models/Car.h Models/Truck.cpp Models/Truck.h Services/VehicleManager.cpp Services/VehicleManager.h Services/VehicleFactory.h Services/BookingManager.cpp Services/BookingManager.h Models/Booking.cpp Models/Booking.h Utils/Utils.cpp)

