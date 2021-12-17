// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 2021
// This program uses a compound boolean statement to check if the user
// can date the grandchild
#include <iostream>

int main() {
    // this function uses a compound boolean statement
    std::string userWealthInput;
    std::string userLooksInput;

    // Get input from user
    std::cout << "Are you rich? Enter(y/n): ";
    std::cin >> userWealthInput;

    std::cout << "Are you handsome? Enter(y/n): ";
    std::cin >> userLooksInput;

    // Check if the user has all that is required
    // to date the grandchild
    if (userWealthInput == "y" || userWealthInput == "Y"
        || userLooksInput == "y" || userLooksInput == "Y") {
        std::cout << "Approved! You can date our grandchild \n";
        std::cout << "" << std::endl;
        std::cout << "Thanks for participating";
    } else if (userWealthInput == "n" || userWealthInput == "N"
            || userLooksInput == "n" || userLooksInput == "N") {
        std::cout << "Sorry, you cannot date our granchild \n";
        std::cout << "" << std::endl;
        std::cout << "Thanks for participating";
    } else {
      std::cout << "Please enter either y/n \n";
      std::cout << "" << std::endl;
      std::cout << "Thanks for participating";
    }
}

