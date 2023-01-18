// Copyright (c) 2022 Emmanuel Fofeyin
//
// Created by: Emmanuel Fofeyin
// Created on: Jan 2023
// This program combines two lists by alternatingly taking elements.

#include <iostream>
#include <list>
#include <string>

std::list<std::string> concatenatesLists(std::list<std::string> list1,
                                         std::list<std::string> list2) {
    std::string aSingleItem;
    std::list<std::string> concatenatedLists;

    for (std::string& aSingleItem : list1) {
        concatenatedLists.push_back(aSingleItem);
    }
    for (std::string& aSingleItem : list2) {
        concatenatedLists.push_back(aSingleItem);
    }
    return concatenatedLists;
}

int main() {
    // this function generates the random numbers

    std::list<std::string> firstList;
    std::list<std::string> secondList;
    std::string item;
    std::list<std::string> combinedLists;

    std::cout << "Please enter 5 items to place in the list:" << std::endl;
    std::cout << "" << std::endl;
    for (int counter = 0; counter < 5; counter++) {
        std::cout << "Item" << counter + 1 << ": ";
        std::getline(std::cin, item);
        firstList.push_back(item);
    }

    std::cout << "Please enter 5 items to place in the list:" << std::endl;
    std::cout << "" << std::endl;
    for (int counter = 0; counter < 5; counter++) {
        std::cout << "Item" << counter + 1 << ": ";
        std::getline(std::cin, item);
        secondList.push_back(item);
    }
    // calls function
    combinedLists = concatenatesLists(firstList, secondList);
    std::cout << "" << std::endl;
    std::cout << "Here is your combined list: " << std::endl;
    for (std::string& item : combinedLists) {
        std::cout << item << ", ";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
