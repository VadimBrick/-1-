#include <iostream>
using namespace std;

int main() {
    
   const int M=6;
   const int N=4;
    
int mas[M][N] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    };

    for (int i = 0; i < N; i++) {  
        int k = 0;                 

        for (int j = 0; j < M; j++) {
            if (mas[i][j] % 2 == 0) { 
                k++;
            }
        }

        cout << "Row " << i << ": even count = " << k << endl;
    }

    return 0;
}
