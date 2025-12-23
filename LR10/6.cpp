#include <iostream>
using namespace std;

int main() {
    const int M = 4; // кількість рядків
    const int N = 7; // кількість стовпців

    
    int mas[M][N] = {
        {1,  2,  3,  4,  5,  6,  7},
        {8,  9, 10, 11, 12, 13, 14},
        {15,16, 17, 18, 19, 20, 21},
        {22,23, 24, 25, 26, 27, 28}
    };

    int minValue = mas[0][0]; 
    int minRow = 0;           
    int minCol = 0;           

    
    for (int row = 0; row < M; row++) {
        for (int col = 0; col < N; col++) {

            if (mas[row][col] < minValue) {
                minValue = mas[row][col];
                minRow = row;
                minCol = col;
            }
        }
    }

    
    cout << "Mimum element: " << minValue << endl;
    cout << "Col index: " << minRow << endl;
    cout << "Column index: " << minCol << endl;

    cout << "Element number (counting from 1): row " 
         << (minRow + 1) << ", column " << (minCol + 1) << endl;

    return 0;
}
