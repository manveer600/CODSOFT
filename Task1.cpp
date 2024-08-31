#include <iostream>
#include <cstdlib>  
#include <ctime>   

int main() {
    std::srand(std::time(0)); 

    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;
    
    std::cout << "I have generated a random number between 1 and 100.\n";
    std::cout << "Can you guess what it is?\n";

    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the correct number: " << randomNumber << "\n";
        }
    }

    return 0;
}
