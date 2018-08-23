#include <iostream>
using namespace std;

int fib (int n);
int main(){
    int n, fibNum;
    cout<<"Please enter a positive integer: ";
    cin>>n;
    
    fibNum = fib(n);
    cout<<fibNum<<endl;
    return 0;
}

int fib (int n){
    int t1 = 1, t2 = 2, nextTerm = 0;
    
    if(n == 1 || n == 2){
        nextTerm = 1;
    } else if(n==3){
        nextTerm = 2;
    } else if(n==4){
        nextTerm = 3;
    }else{
        for (int i = 4; i <= n; ++i){
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
    }
    return nextTerm;
}
