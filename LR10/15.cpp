#include <iostream>
using namespace std;

int main() {
    const int M = 3;
    const int N = 3;

    int mas[M][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int sumMain = 0;   
    int sumSecondary = 0; 

    for (int row = 0; row < M; row++) {
        for (int col = 0; col < N; col++) {
            if (row == col) {              
                sumMain += mas[row][col];
            }
            if (row + col == N - 1) {       
                sumSecondary += mas[row][col];
            }
        }
    }

    cout << "Sum of main diagonal: " << sumMain << endl;
    cout << "Sum of secondary diagonal: " << sumSecondary << endl;

    return 0;
}
