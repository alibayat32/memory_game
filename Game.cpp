#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include <limits> // for numeric_limits<streamsize>::max()


using namespace std;

int get_random_digit() {
    return rand() % 8 + 2;
}

