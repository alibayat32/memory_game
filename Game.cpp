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


int main() {
    
    

    while (true) {
    	
    	cout << "Enter the length of digits: ";
    	int length = get_user_input();
    
        // Generate the random digits
        string digits;
        for (int i = 0; i < length; i++) {
            digits += to_string(rand() % 10);
        }

        // Show the digits to the user for 5 seconds
        cout << "Memorize these digits: " << digits << endl;
        sleep(2);

        // Clear the console screen
        system("cls");

        // Ask the user to enter the digits they saw
        cout << "Enter the digits you saw: ";
        string guess;
        cin >> guess;

        // Check if the guess is correct
        if (guess == digits) {
            cout << "Congratulations! You remembered the digits!" << endl;
            
            // Ask user if they want to play again
        char play_again;
        do {
            cout << "Do you want to play again? (y/n): ";
            cin >> play_again;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (play_again != 'y' && play_again != 'n');

        if (play_again == 'n') {
            break;
        }
        //
        } else {
            cout << "Sorry, you entered the wrong digits. Try again." << endl;
            sleep(1);
            system("cls");
            
        }
    }

    return 0;
}