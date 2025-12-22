#include <iostream>
using namespace std;

int main(void){
    
int c0;

cout << "Enter non-negative and non-zero integer number: ";
cin >> c0;

if(c0 <=0){
    cout<<"Number must be positive:";
    return 0;
    }
  
cout <<c0 <<"";

 int steps =0; 
 
    while(c0 !=1 ){
        
        if(c0 %2 ==0){
            c0=c0 / 2;
            
            }else{
                c0= 3 *c0+1;
                
                }
        cout<<"\n"<<c0 <<endl;
        steps++;
        }
        
        cout << "Number os steps:" << steps <<endl;
