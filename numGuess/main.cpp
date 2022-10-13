/*
Write a C++ program to implement the Number Guessing Game. In this game the computer chooses a random number between 1 and 100, and the player tries to guess the number in as few attempts as possible. Each time the player enters a guess, the computer tells him whether the guess is too high, too low, or right. Once the player guesses the number, the game is over. 
*/
#include<iostream>
#include<cstdlib>
#include <ctime>

int RandomNumber () {
    int n;
	srand(time(0));
	n = rand() % 91 + 10;

    return n;
}

int main (){
    int number = RandomNumber();
    int guess;


    std::cout << "Number is: " << number;
    std::cout << "\nPick a number between 1 and 100 Number is: ";

    do
    {
        std::cin >> guess;
        if (guess < 1 || guess > 100){
            std::cout << "\nYour guess of " << guess << " is out sided of 1 - 100 \n";
            std::cout << "Please pick a number between 1 and 100.\n";
        }

        else if (guess < number ){
            std::cout << "\nYou number is too low. \nGuess again\n";
        }

        else if (guess > number ){
            std::cout << "\nYou number is too high. \nGuess again \n";
        }

        else
            std::cout << "\nCorrect! The number was " << guess << "\n";

        
    } while (guess != number);
    
    

}