#include <iostream>
using namespace std;

int main() {

    int mas[4][3] = {// 4=рядки 3=стовпці
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    for (int i = 0; i < 4; i++) {  
        int k = 0;                 

        for (int j = 0; j < 3; j++) {
            if (mas[i][j] % 2 == 0) { 
                k++;
            }
        }

        cout << "Row " << i << ": even count = " << k << endl;
    }

    return 0;
}
