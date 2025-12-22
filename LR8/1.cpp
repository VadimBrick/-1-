#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    const int m =12;
    int arr[m] = {5,6,7,2,3,4,8,10,9,11,12,1};
     
    for(int i = 0; i < m-1;i++){
        for(int j=0; j <m-i-1; j++){          
            if(arr[j] > arr[j+1]){
                
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                
                }           
            } 
        }
    
    
    cout << "Increase sort: ";
    for(int i =0; i < m; i++){
        cout << arr[i]<< " ";
    }
    
    cout << endl;  
     for(int i = 0; i<m-1;i++){
        for(int j=0; j <m-i-1; j++){          
            if(arr[j] < arr[j+1]){
                
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
                
                }           
            } 
        }
    
    
    cout << "Decrease sort: ";
    for(int i =0; i < m; i++){
        cout << arr[i] << " ";    
        }
    return 0;

}
