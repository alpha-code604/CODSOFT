#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); // random number with respect of time
    int number = rand() % 100 + 1; // limit to 100
    int guess;
    cout << "Enter  the number (1 to 100): ";

    while (true) {
        cin >> guess;
        if (guess < number)
            cout << "Too low. Try again: ";
        else if (guess > number)
            cout << "Too high. Try again: ";
        else {
            cout << "Correct! You guessed the number.\n";
            break;
        }
    }

    return 0;
}
