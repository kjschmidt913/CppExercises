#include <iostream>
using namespace std;

void oddsKeepEvensFlip(int arr[], int n);

int main(){
    
    int size = 6;
    int arr[6] = {5, 2, 11, 7, 6, 4};
    
    oddsKeepEvensFlip(arr, size);
    
    return 0;
    
}

void oddsKeepEvensFlip(int arr[], int n){
    
    int o[n],e[n];
    int odd=0,even=0;
    
    for(int i=0;i<n;i++){
        
        //odd numbers then even numbers
        if((arr[i]%2)==1){
            o[odd++]=arr[i];
        }else {
            e[even++]=arr[i];
        }
    }

    int eno=even;
    
    for(int i=odd;i<(odd+even);i++){
        o[i]=e[--eno];
    }
    
    for(int i=0;i<n;i++){
        cout<<o[i]<<" ";
    }
    
    cout<<endl;
    
    
}
