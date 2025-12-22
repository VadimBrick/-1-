#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    const int ARRAY_SIZE = 10;
    int randomM[ARRAY_SIZE] = {};

    int maxIndex = 0;
    int minIndex = 0;
    
    srand(time(NULL));

   
    cout << "Start array: ";
    
    for (int i = 0; i < ARRAY_SIZE; i++) {
        randomM[i] = rand() % 100;
        
        
        cout << randomM[i] << " ";
        
        
        if (i == 0) {
            
            minIndex = 0;
            maxIndex = 0;
        } else {
            
            if (randomM[i] < randomM[minIndex]) {
                minIndex = i;
            }
            
            if (randomM[i] > randomM[maxIndex]) {
                maxIndex = i;
            }
        }
    }
    cout << endl;
     
    if (minIndex != maxIndex) {
        
        int temp = randomM[minIndex];          
        randomM[minIndex] = randomM[maxIndex]; 
        randomM[maxIndex] = temp;              
    }
   
    cout << "Array after exchange: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << randomM[i] << " ";
    }
    cout << endl;
    
    return 0;
}
