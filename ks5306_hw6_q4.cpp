#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int num);

int main(){
    int num;
    
    cout<<"Please enter a positive integer >= 2: ";
    cin>>num;
    
    printDivisors(num);
    
    return 0;
}

void printDivisors(int num){
    int square_root = (int) sqrt(num);
    
    for (int i = 1; i < square_root; i++) {
        if (num % i == 0){
            cout<<i<<" ";
        }
    }
    for (int i = square_root; i >= 1; i--) {
        if (num % i == 0){
            cout<<num/i<<" ";
        }
    }
}