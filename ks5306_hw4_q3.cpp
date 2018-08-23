#include <iostream>
using namespace std;

int main(){
    int n, counter, currDigit;
    char binaryDigit = ' ';
    string binaryNum;
    
    cout<<"Please enter a positive integer:"<<endl;
    cin>>n;
    
    currDigit = n;
    
    for (counter = 0; counter <= 6; counter++) {
        binaryDigit = currDigit%2 + '0';
        binaryNum += binaryDigit;
        currDigit /=2;
    }
    reverse(binaryNum.begin(), binaryNum.end());
    cout<<"The binary representation of " <<n<< " is "<<binaryNum<<endl;
    
    return 0;
}