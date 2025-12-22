#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm> 
using namespace std;

int main() {
    
    const int A_Size =10;
    int Array[A_Size] {1,2,3,4,5,6,7,8,9,10};
    
    int A;
    int count =0;
    
    for (int i = 0; i < A_Size; i++) {
        cout << Array[i];
        if (i < A_Size - 1) {
            cout << ", ";
        }
    }
    
    cout << endl;

    cout << "Enter the number A for comparison: ";
    
    if (!(cin >> A)) {
        cerr << "Input error. Please enter a whole number." << endl;
        return 1; 
    }
    cout << "Entered A =" << A << endl;
    cout << "-----------------------------------" << endl;

    
    
    for (int i = 0; i < A_Size; i++) {
        
        if (Array[i] > A) {
            count++; 
        }
    }

    
    cout << "Number of elements in the array greater than " << A << ": " <<count << endl;

    return 0;
}
