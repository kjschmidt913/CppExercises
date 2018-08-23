#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int counter;
    double product, mean, a, length, b;
    bool seenEndOfInput;
    
    //Part A
    product = 1;
    
    cout<<"Part A:"<<endl;
    cout<<"Please enter the length of your sequence:"<<endl;
    cin>>length;
    cout<<"Please enter your sequence:"<<endl;
    
    for (counter = 1; counter <=length; counter++){
        cin>>a;
        product *= a;
    }
    mean = (long double)pow(product, 1.0 / length);
    cout<<"The geometric mean is: "<<mean<<endl;

    //Part B
    mean = 0;
    product = 1;
    length = 0;
    
    cout<<"Part B:"<<endl;
    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1:"<<endl;
    
    seenEndOfInput = false;
    
    while(seenEndOfInput == false){
        cin>>b;
        if (b == -1){
            seenEndOfInput = true;
        } else{
            product *= b;
            length ++;
        }
    }
    mean = (long double)pow(product, 1.0 / length);
    
    cout<<"The geometric mean is: "<<mean<<endl;
    
    return 0;
}