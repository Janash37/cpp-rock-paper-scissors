// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <random>

int main()
{

    std::string userInput = "";
    std::string playerName = "";
    std::vector<std::string> outputOptions = { "Rock","Paper", "Scissors" };

    std::cout << "Welcome, player, to this game of 'Rock, Paper, Scissors'!\n";
    std::cout << "Which will you go for?\n";
    std::cout << "Decide now!\n";

    std::cin >> userInput;

    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<size_t> distrib(0, outputOptions.size() - 1);

    std::string randomOutput = outputOptions[distrib(rng)];

    if (userInput != "Rock" && userInput != "Paper" && userInput != "Scissors") {
        std::cout << "You chose " << userInput << ", which is NOT an expected input.\n";
        std::cout << "The game explodes in a fiery mess.\n";
        std::cout << "Next time, try choosing from either 'Rock', 'Paper', or 'Scissors'!\n";
    }
    else {
        std::cout << "You chose " << userInput << ". An excellent choice.\n";
        std::cout << "The computer counters with " << randomOutput << ".\n";
    }

    // cannot use a switch statement here because only int, enum or char is permitted as a switch param
    if (userInput == "Rock" && randomOutput != "Paper") {
        std::cout << "Congratulations, you win!\n";
    } else if (userInput == "Paper" && randomOutput != "Scissors") {
        std::cout << "Congratulations, you win!\n";
    } else if (userInput == "Scissors" && randomOutput != "Rock") {
        std::cout << "Congratulations, you win!\n";
    } else {
        std::cout << "Sorry, computer wins this round.\n";
    }
};