#include <iostream>
using namespace std;

int main() {

    const int M = 5;  // кількість рядків
    const int N = 7;  // кількість стовпців

    int mas[M][N] = {
        {1,  2,  3,  4,  5,  6,  7},
        {8,  9, 10, 11, 12, 13, 14},
        {15,16, 17, 18, 19, 20, 21},
        {22,23, 24, 25, 26, 27, 28},
        {29,30, 31, 32, 33, 34, 35}
    };

    for (int row = 0; row < M; row++) {
        int sum = 0;  

        for (int col = 0; col < N; col++) {
            sum += mas[row][col]; 
        }

        cout << "Row " << row << ": sum = " << sum << endl;
    }

    return 0;
}
