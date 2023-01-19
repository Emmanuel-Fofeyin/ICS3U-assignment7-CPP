// Copyright (c) 2023 Emmanuel Fofeyin All rights reserved
//
// Created by: Emmanuel Fofeyin
// Created on: Jan 2023
// This program reverses lists

#include <array>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <list>
#include <random>
#include <string>

std::list<std::string> reverseList(std::list<std::string> notReversedList) {
    // This function reverses lists
    std::list<std::string> reversedList;
    int counter = notReversedList.size() - 1;

    for (std::string temp : notReversedList) {
        reversedList.push_front(temp);
    }

    return reversedList;
}

int main() {
    // This function is the main function
    std::list<std::string> notReversedList;
    std::list<std::string> reversedList;
    std::string userInput;

    std::cout << "Keep entering anything and when you are done enter 'DONE' .\n"
              << std::endl;

    while (userInput != "DONE") {
        std::cout << "Insert:";
        std::cin >> userInput;

        if (userInput != "DONE") {
            notReversedList.push_back(userInput);
        }
    }

    reversedList = reverseList(notReversedList);

    std::cout << "\nReversed:" << std::endl;

    for (std::string temp : reversedList) {
        std::cout << temp << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
