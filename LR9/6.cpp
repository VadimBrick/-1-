#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> 
using namespace std;

int main() {
    
    const int ARRAY_SIZE = 10;
    
    int testM[ARRAY_SIZE] = {5, 12, 0, 8, 0, 4, 33, 0, 15, 9}; 

    int firstZeroIndex = -1; 
    
 
    cout << "Given array: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << testM[i] << " ";
    }
    cout << endl;
    cout << "--------------------------------------" << endl;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        
        if (testM[i] == 0) {
            
            firstZeroIndex = i;
            
            break; 
        }
    }


    if (firstZeroIndex != -1) {

        cout << "The first zero element has been found!" << endl;
        cout << "Index (position in the array, counting from 0): " << firstZeroIndex << endl;
        cout << "Element number (position, counting from 1): " << (firstZeroIndex + 1) << endl;
    } else {
        
        cout << "The array does not contain zero elements." << endl;
    }

    return 0;
}
