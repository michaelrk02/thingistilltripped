//defines a number whether it is a prime 
#include <iostream>
using namespace std;

int main(){
    start:
    int num1, i, u=0;
    while(u == 0){
        cout << "Please enter a number you want to check: " ;
        cin >> num1;

        for(i = 2; i < num1; i++){
            if(num1 % i == 0){
                cout << num1 << " is not a prime number" << endl;
                goto start; //go to line 6
                //continue;
            }
        
        }
        cout << num1 << " is a prime number" << endl;
    }
return 0;
}