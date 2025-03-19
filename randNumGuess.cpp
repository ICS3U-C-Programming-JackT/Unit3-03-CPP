// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: March 19, 2025
// Random number guessing program in C++

#include <iostream>
#include <cmath>
#include <string>

int main() {
    // Create variables for program number, get user number
    int programNumber = rand() % 10;
    int userNumber;
    // Correct number checker to restart func
    bool correct = false;

    // Get user input (user num 1-9)
    std::cout << "For testing purposes, the random number is: "
    << programNumber << "\n";
    std::cout << "Enter a number between 1 and 9:  ";
    std::cin >> userNumber;

    // check if correct
    if (userNumber == programNumber) {
        correct = true;
        std::cout << "YOU GUESSED RIGHT!!! 🥳" << std::endl;
    }

    // check if incorrect
    if (userNumber > programNumber || userNumber < programNumber) {
        std::cout << "Aww, not the right answer, sorry!" << std::endl;
    }

    // check if out of range
    if (userNumber > 9 || userNumber < 1) {
        std::string msg3 = (
            "Please enter a number within the proper range (1-9)");
        std::cout << msg3 << std::endl;
    }

    // restart if incorrect
    if (!correct) {
        main();
    }
}
