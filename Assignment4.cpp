// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program Takes two values from user and print greatest among them

#include <iostream>
#include <string>


int main() {
    int integer_1;
    int integer_2;
    std::string value_1;
    std::string value_2;

    // input
    std::cout << "Enter Value1: ";
    std::cin >> value_1;
    std::cout << "Enter Value2: ";
    std::cin >> value_2;

    // process & output
    try {
        integer_1 = std::stoi(value_1);
        integer_2 = std::stoi(value_2);


        if ( integer_1 > integer_2 ) {
            // Output
            std::cout << " value_1 is grater " << std::endl;
      } else if ( integer_2 > integer_1 ) {
            // Output
            std::cout << " value_2 is grater " << std::endl;
      } else {
            // Output
            std::cout << " value_1 and value_2 are equall " << std::endl;
      }
  } catch (std::invalid_argument) {
        std::cout << "That was not a valid integer" << std::endl;
    }
}
