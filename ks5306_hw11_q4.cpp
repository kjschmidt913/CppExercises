#include<iostream>
#define inf 100000000000000007LL
#define lng long long
using namespace std;

lng int board[100000];
lng int dp[100000];
int n;

lng int solve(int i);

int main(){
    cout<<"Enter number of elements in board: ";
    cin>>n;
    cout<<"Enter "<<n<<" values of the subsequent elements: ";
    
    for(int i=0;i<n;i++){
        cin>>board[i];
    }
    
    board[0]=0;
    
    for(int i=0;i<n+1;i++){
        dp[i]=-1;
    }
    cout<<"The minimum cost is: "<<solve(0)<<"\n";
    
    return 0;
}

lng int min(lng int a, lng int b){
    if(a>b){
        return b;
    }
    return a;
}

lng int solve(int i){
    if(i>=n-1){
        return board[n-1];
    }
    return board[i] + min(solve(i+1),solve(i+2));
}