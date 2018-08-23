#include <iostream>
using namespace std;

int main(){
    int n, counter, currDigit;
    
    cout<<"Please enter a positive integer:"<<endl;
    cin>>n;
    
    for(counter = 1; counter<=n; counter++){
        if ((counter % 2 == 0) && (counter/10 == 0)){
            cout<<counter<<endl;
        } else if ((counter % 2 == 0) && (counter/10 != 0)){
            currDigit = counter/10;
            if (currDigit%2 == 0){
                cout<<counter<<endl;
            }
        }
    }
    return 0;
}