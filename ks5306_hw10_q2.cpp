#include<iostream>
using namespace std;

int *findMissing(int arr[], int n, int &resArrSize);

int main(){
    int arr[] = {3,1,3,0,6,4};
    int *r;
    int arrSize;
    r = findMissing(arr,6,arrSize);
    
    for (int i=0; i<arrSize; i++){
        cout<<r[i]<<" ";
    }
    
    
    return 0;
}

int *findMissing(int arr[], int n, int &resArrSize){
    int *p = new int[n];
    for (int i = 0; i<n; i++){
        p[i] = i;
    }
    
    int count = n;
    for (int i = 0; i<n; i++){
        if (arr[i] < n){
            if (p[arr[i]] != -1){
                p[arr[i]] = -1;
                count--;
            }
        }
    }
    
    int *d = new int[count];
    
    int j = 0;
    for (int i = 0; i<n; i++){
        if (p[i] != -1){
            d[j] = p[i];
            j++;
        }
    }
    
    resArrSize = count;
    return d;
}

