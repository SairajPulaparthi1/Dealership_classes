#include <iostream>
#include "Vehicle.h"
using namespace std;
#include <string>
Vehicle::Vehicle(){
    make = "COP3503";
    model = "Rust Bucket";
    year = 1900;
    price = 0.0;
    mileage = 0;
}

Vehicle::Vehicle(string Veh_make, string Veh_model, int Veh_year, float Veh_price, int Veh_mileage){

    make = Veh_make;
    model = Veh_model;
    year = Veh_year;
    price = Veh_price;
    mileage = Veh_mileage;

}
void Vehicle::Display() {
    cout<< year <<" "<< make <<" "<< model <<" $"<< price << " " << mileage << std::endl;

};

string Vehicle::GetYearMakeModel(){
    return to_string(year) + " " + make + " " + model;
}
float Vehicle::GetPrice(){
    return price;
}


