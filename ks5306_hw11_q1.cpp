#include<iostream>
using namespace std;

void printTriangle(int n);
void printOppositeTriangles(int n);
void printRuler(int n);

int main(){
    printTriangle(4);
    printOppositeTriangles(4);
    printRuler(4);
    
    return 0;
}

void printTriangle(int n){
    if (n == 1){
        cout<<"* "<<endl;
    } else{
        printTriangle(n-1);
        for(int i = 1; i<=n; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

void printOppositeTriangles(int n){
    if (n == 1){
        cout<<"* "<<endl;
    }else{
        for(int i = 1; i<=n; i++){
            cout<<"* ";
        }
        cout<<endl;
        printOppositeTriangles(n-1);
        for(int i = 1; i<=n; i++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

void printRuler(int n){
    if(n>1){
        printRuler(n-1);
    }
    cout<<"\n";
    
    for(int i =0; i<n;i++){
        cout<<"-";
    }
    if(n>1){
        printRuler(n-1);
    }
}
