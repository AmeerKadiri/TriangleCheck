#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Word to be guessed
    string secretWord = "hangman";

    // Tracks the guessed letters
    vector<char> guessedLetters(secretWord.length(), '_');

    // Stores the letters already guessed
    vector<char> guessed;

    // Number of attempts remaining
    int attemptsLeft = 6;

    // Game loop
    while (attemptsLeft > 0) {
        // Print the current state of the guessed letters
        for (char letter : guessedLetters) {
            cout << letter << " ";
        }
        cout << endl;

        // Print the letters already guessed
        cout << "Guessed letters: ";
        for (char letter : guessed) {
            cout << letter << " ";
        }
        cout << endl;

        // Get user's guess
        cout << "Enter a letter: ";
        char guess;
        cin >> guess;

        // Check if the guess is valid (i.e., a single letter)
        if (isalpha(guess) && guessed.count(guess) == 0) {
            guessed.push_back(guess);

            // Check if the guess is correct
            bool correctGuess = false;
            for (int i = 0; i < secretWord.length(); i++) {
                if (secretWord[i] == guess) {
                    guessedLetters[i] = guess;
                    correctGuess = true;
                }
            }

            // Check if the game has been won
            if (guessedLetters == secretWord) {
                cout << "Congratulations! You won!" << endl;
                break;
            }

            // Decrement attempts if the guess is incorrect
            if (!correctGuess) {
                attemptsLeft--;
                cout << "Incorrect guess. Attempts remaining: " << attemptsLeft << endl;

                // Check if the game has been lost
                if (attemptsLeft == 0) {
                    cout << "Game over! The word was: " << secretWord << endl;
                }
            }
        } else {
            cout << "Invalid guess. Please enter a single letter that hasn't been guessed before." << endl;
        }
    }

    return 0;
}
