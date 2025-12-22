#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int m;


    cout << "Enter the number of elements in the array: ";
    cin >> m;

   
    if (m <= 0) {
        cout << "The array cannot be empty!" << endl;
        return 0;
    }

    int arr[m];

    
    cout << "Enter " << m << " elements: ";
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }


    int maxV = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < m; i++) {
        if (arr[i] > maxV) {
            maxV = arr[i];
            maxIndex = i;
        }
    }


    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }


    cout << "Array after processing: ";
    for (int i = 0; i < m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
