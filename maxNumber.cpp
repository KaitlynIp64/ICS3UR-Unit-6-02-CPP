// Copyright (c) 2022 Kaitlyn Ip All rights reserved
// Created by: Kaitlyn Ip
// Created on: Dec 2022
// This program finds the largest number
// in a list of 10 random numbers

#include <array>
#include <iostream>
#include <random>

template <size_t length>
int FindLargestNumArray(std::array<int, length> numberArray) {
    // Finds the largest number from a list of 10 random numbers

    int largestNum = 0;

    for (int counter = 0; counter < numberArray.size(); counter++) {
        if (numberArray[counter] > largestNum) {
            largestNum = numberArray[counter];
        }
    }

    return largestNum;
}

int main() {
    // Generates 10 random numbers in an array and calls a function

    int largestNumArray;
    std::array<int, 10> randomArray;
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(1, 100);
    for (int counter = 0; counter < randomArray.size(); counter++) {
        int randomNum = idist(rgen);

        randomArray[counter] = randomNum;
        std::cout << "The random number "
        << counter + 1 << " is: " << randomNum;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    largestNumArray = FindLargestNumArray(randomArray);
    std::cout << "The largest number is ";
    std::cout << largestNumArray << ".";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "\nDone." << std::endl;
}
