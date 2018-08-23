#include <iostream>
using namespace std;

int main(){
    int numOne, numTwo, sum, difference, product, divided, modulus;
    double dividedDoub;
    
    cout<<"Please enter two positive integers, separated by a space:"<<endl;
    cin>>numOne>>numTwo;
    
    sum = numOne + numTwo;
    difference = numOne - numTwo;
    product = numOne * numTwo;
    dividedDoub = (double) numOne / numTwo;
    divided = numOne / numTwo;
    modulus = numOne % numTwo;
    
    cout<<numOne<<" + "<<numTwo<<" = "<<sum<<endl;
    cout<<numOne<< " - " <<numTwo<< " = " <<difference<<endl;
    cout<<numOne<< " * " <<numTwo<< " = " <<product<<endl;
    cout<<numOne<< " / " <<numTwo<< " = " <<dividedDoub<<endl;
    cout<<numOne<< " div " <<numTwo<< " = " <<divided<<endl;
    cout<<numOne<< " mod " <<numTwo<< " = " <<modulus<<endl;
    
    
    return 0;
}

