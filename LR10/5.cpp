#include <iostream>
using namespace std;

int main() {

    const int M = 3; // кількість рядків
    const int N = 4; // кількість стовпців

    int mas[M][N] = {
        {3,  8, 12,  4},
        {15, 6,  2,  9},
        {7, 11, 20,  1}
    };

    int maxValue = mas[0][0]; 
    int maxRow = 0;           
    int maxCol = 0;           

    
    for (int row = 0; row < M; row++) {
        for (int col = 0; col < N; col++) {

            if (mas[row][col] > maxValue) {
                maxValue = mas[row][col];
                maxRow = row;
                maxCol = col;
            }
        }
    }

    
    cout << "Maximum element: " << maxValue << endl;
    cout << "Row index: " << maxRow << endl;
    cout << "Column index: " << maxCol << endl;

    cout << "Element number (counting from 1): row " 
         << (maxRow + 1) << ", column " << (maxCol + 1) << endl;

    return 0;
}
