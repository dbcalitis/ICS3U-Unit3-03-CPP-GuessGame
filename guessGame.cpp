// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program is a number guessing game

#include <iostream>
#include <random>


int main() {
    // This function checks if your guess is correct

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]

    const int ANSWER = idist(rgen);
    int guessNumber;

    // input
    std::cout << "Enter a number as your guess (0-9): ";
    std::cin >> guessNumber;

    // process & output
    if (guessNumber == ANSWER) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed incorrectly." << std::endl;
    }

    std::cout << "The correct answer is " << ANSWER << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
