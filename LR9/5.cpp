#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    const int ARRAY_SIZE = 10;
    int randomM[ARRAY_SIZE];

    srand(time(NULL));

    cout << "The given array: ";

    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        randomM[i] = rand() % 1000;
        cout << randomM[i] << " ";
    }
    cout << endl;

    
    int largest = randomM[0];
    int secondLargest = randomM[0];


    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (randomM[i] > largest) {
            largest = randomM[i];
        }
    }

    
    bool foundSecond = false;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        int current = randomM[i];

        if (current < largest) {
            if (!foundSecond || current > secondLargest) {
                secondLargest = current;
                foundSecond = true;
            }
        }
    }


    if (!foundSecond) {
        cout << "The array does not contain enough unique elements to determine the second largest." << endl;
    } else {
        cout << "The largest element: " << largest << endl;
        cout << "The second largest element: " << secondLargest << endl;
    }

    return 0;
}
