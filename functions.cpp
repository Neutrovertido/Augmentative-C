#include <iostream> //This is because of the destructor using cout
// See the functions declared
int theSum(int num1, int num2) {
    return num1 + num2;
}

double theSum(double num1, double num2) {
    return num1 + num2;
}

void Computer::setBrand(std::string varBrand) {
    brand = varBrand;
}

std::string Computer::getBrand() {
    return brand;
}

// Constructor of Soil class
Soil::Soil(std::string comp) {
    composition = comp;
}

// You can also use this syntax:
// Soil::Soul(std::string comp): composition(comp) {}

// Function to get the composition of the soil
std::string Soil::getComposition() {
    return composition;
}

// Soil destructor
Soil::~Soil() {
    std::cout << "We're done by right now!" << "\n";
}