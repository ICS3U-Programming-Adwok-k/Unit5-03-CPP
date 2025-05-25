// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: May 25th, 2025
// This program takes the level from the user and returns the percentage mark
#include <iostream>
#include <string>

int calcMark(std::string level) {
     if (level == "4+") {
        return 100;
    } else if (level == "4") {
        return 90;
    } else if (level == "4-") {
        return 85;
    } else if (level == "3++") {
        return 80;
    } else if (level == "3+") {
        return 77;
    } else if (level == "3") {
        return 73;
    } else if (level == "3-") {
        return 70;
    } else if (level == "2++") {
        return 67;
    } else if (level == "2+") {
        return 63;
    } else if (level == "2") {
        return 60;
    } else if (level == "2-") {
        return 57;
    } else if (level == "1++") {
        return 53;
    } else if (level == "1+") {
        return 50;
    } else if (level == "1") {
        return 45;
    } else if (level == "1-") {
        return 40;
    } else {
        return -1;
    }
}

int main() {
    std::string userLevel;
    std::cout << "Enter your level (e.g., 4+, 3, 2-): ";
    std::cin >> userLevel;
    int mark;

    if (calcMark(userLevel) == -1) {
        std::cout << "Invalid input";
    } else {
        std::cout << calcMark(userLevel);
        mark = calcMark(userLevel);
        std::cout << "The calculated mark is: " << mark << std::endl;
    }
}
