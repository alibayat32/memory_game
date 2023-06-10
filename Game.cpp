#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <limits> // for numeric_limits<streamsize>::max()


using namespace std;

int get_random_digit() {
    return rand() % 8 + 2;
}

// Function to get user input and validate it
int get_user_input() {
    int input;
    while (true) {
        cin >> input;
        if (cin.fail() || input < 2 || input > 9) {
            cout << "Invalid input! Please enter a single digit number between 2 and 9." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter the length of digits again: ";
        } else {
            break;
        }
    }
    return input;
}

