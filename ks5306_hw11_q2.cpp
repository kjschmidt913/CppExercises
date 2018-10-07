#include<iostream>
#include<cmath>
using namespace std;

int sumOfSquares(int arr[], int arrSize);
bool isSorted(int arr[], int arrSize);

int main(){
    int arr [4] = { 2, -1, 3, 10 };
    int sum = sumOfSquares(arr, 4);
    
    cout<<"The sum of the squares in the array are: "<<sum<<endl;
    
    if (isSorted(arr, 4)){
        cout<<"array is sorted"<<endl;
    }else{
        cout<<"array is not sorted"<<endl;
    }
    
    
    return 0;
}

int sumOfSquares(int arr[], int arrSize){
    if(arrSize <= 0){
        return 0;
    } else{
    return (sumOfSquares(arr, arrSize-1) + pow(arr[arrSize-1], 2));
    }
}

bool isSorted(int arr[], int arrSize){
    if (arrSize <= 1){
        return true;
    } else{
        if (arr[arrSize -1] < arr[arrSize-2]){
            return false;
        } else{
            return isSorted(arr, arrSize - 1);
        }
    }
}