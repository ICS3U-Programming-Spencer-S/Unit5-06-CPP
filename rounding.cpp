// Copyright (c) 2022 All rights reserved.
// .
// Created by: Spencer S
// Date : Dec 18, 2022
// A program which uses lists and without functions
// to round a decimal number

#include <math.h>
#include <cmath>
#include <iostream>
#include <string>
using std::string;

void RoundDecimal(float &decimal, int places) {
    // multiples inputted number by 10 to the power of places
    decimal = decimal * (pow(10, places));
    // Adds 0.5
    decimal += 0.5;
    // Cast to int
    decimal = static_cast<int>(decimal);
    // divides by 10 to the power of places
    decimal = decimal / (pow(10, places));
}

int main() {
    // Declaring variables
    std::string userDecimal, userPlace;
    float userDecimalFlo;
    int userPlaceInt;

    // input for decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> userDecimal;
    // input for decimal amount
    std::cout << "Enter amount to round: ";
    std::cin >> userPlace;

    try {
        // converts inputs from ints to floats
        userDecimalFlo = std::stof(userDecimal);
        userPlaceInt = std::stoi(userPlace);

        // calls the function for use
        RoundDecimal(userDecimalFlo, userPlaceInt);

        // using the function, displays outcome
        std::cout << "The rounded number is ";
        std::cout << userDecimalFlo << "\n";
    } catch (std::invalid_argument) {
        // in case of invalid inputs for decimal or amount
        std::cout << "Invalid input. Use decimals and integers.";
    }
}
