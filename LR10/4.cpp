#include <iostream>
using namespace std;

int main() {
    
    const int M = 4; // кількість рядків
    const int N = 6; // кількість стовпчиків

    int mas[M][N] = {
        { 1,  2,  3,  4,  5,  6},
        { 7,  8,  9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24}
    };

    
    for (int col = 0; col < N; col++) {
        int sum = 0;

        for (int row = 0; row < M; row++) {
            sum += mas[row][col];
        }

        cout << "Column " << col << ": sum = " << sum << endl;
    }

    return 0;
}
