#include <iostream>
using namespace std;

int main(){
    int num, i, counter, product;
    
    cout<<"Please enter a positive integer:"<<endl;
    cin>>num;
    
    for (i = 1; i<=num; i++){
        for (counter = 1; counter <= num; counter++){
            product = i * counter;
            if (product < 10){
                cout<<product<< "    ";
            } else{
                cout<<product<< "   ";
            }
        }
        cout<<endl;
    }
    return 0;
}