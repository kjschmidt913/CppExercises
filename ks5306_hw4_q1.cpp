#include <iostream>
using namespace std;

int main(){
    int a, counter, b;
    
    cout<<"Part A:"<<endl;
    cout<<"Please enter a positive integer:"<<endl;
    cin>>a;
    
    a*=2;
    counter = 0;
    
    while(counter<=a){
        counter +=1;
        if (counter % 2 == 0){
            cout<<counter<<endl;
        }
    }
    
    cout<<"Part B:"<<endl;
    cout<<"Please enter a positive integer:"<<endl;
    cin>>b;
    
    b*=2;
    
    for(counter=1; counter<=b; counter++){
        if (counter % 2 == 0){
            cout<<counter<<endl;
        }
    }
    
    return 0;
}