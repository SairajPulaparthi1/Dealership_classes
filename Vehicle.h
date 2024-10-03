#include <string>
using namespace std;
#pragma once
class Vehicle {
private:
    string make;
    string model;
    int year;
    float price;
    int mileage;

public:
    Vehicle();

    Vehicle(string make, string model, int year, float price, int mileage);

    void Display();

    string GetYearMakeModel();

    float GetPrice();

};
