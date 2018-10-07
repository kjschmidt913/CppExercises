#include<iostream> 
#include<string>
using namespace std;

int minInArray(int arr[],int arrSize);
void minIndices(int min, int arrSize, int arr[]);

int main(){
    int min;
    int arr[20];
    int arrSize = 20;
    
    cout<<"Please enter 20 integers separated by a space: ";
    for(int i=0;i<20;i++){
        cin>>arr[i];
    }
    cout<<endl;

    min=minInArray(arr,arrSize);
    
    cout <<"The minimum value is "<<min<< ", and it is located in the following indices: ";
    minIndices(min, arrSize, arr);
    cout<<endl;
}

int minInArray(int arr[],int arrSize){
    int min = arr[0];
    for(int i=1;i<arrSize;i++){
        if(arr[i]<min){
            min=arr[i];
        };
    }
    return min;
}

void minIndices(int min, int arrSize, int arr[]){
    for(int i=0;i<arrSize;i++){
        if(arr[i]==min) cout<<" "<<i;
    }
}
