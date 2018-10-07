#include<iostream>
#include<vector>
using namespace std;

void partOne();
void partTwo();

int main(){
    partOne();
    partTwo();

    
    return 0;
    
}

void partOne(){
    int arr[100000];
    int index = 0;
    
    cout<<"Please enter a sequence of positive integers, each in a separate line. \nEnd you input by typing -1.\n";
    
    while(1){
        
        int temp;
        cin>>temp;
        
        if(temp == -1){
            break;
        }
        
        arr[index] = temp;
        index++;
        
    }
    
    cout<<"Please enter a number you want to search. ";
    int n;
    cin>>n;
    cout<<endl;
    
    int i;
    cout<<n<<" shows in lines ";
    
    
    
    for( i = 0 ; i < index ; i++ ){
        if( arr[i] == n ){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}

void partTwo(){
    
    vector<int> arr;
    cout<<"Please enter a sequence of positive integers, each in a separate line. \nEnd you input by typing -1.\n";
    
    while(1){
        
        int temp;
        cin>>temp;

        if(temp == -1){
            break;
        }

        arr.push_back(temp);
    }

    cout<<"Please enter a number you want to search. ";
    
    int n;
    cin>>n;

    int i;
    cout<<"\n"<<n<<" shows in lines ";

    
    for( i = 0 ; i < arr.size() ; i++ ){
        if( arr[i] == n ){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
    
}