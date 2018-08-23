#include <iostream>
using namespace std;

int main() {
    int n, nn;
    int lineNum, starCount, spaceCount;
    
    cout<<"Please enter a positive integer:"<<endl;
    cin>>n;
    
    nn = 2*n;
    
    for (lineNum = nn; lineNum >= 0; lineNum--) {
        if (lineNum%2!=0){
            for (spaceCount = 1; spaceCount <= nn-lineNum; spaceCount++){
                cout<<" ";
            }
            for(starCount = 1; starCount <= lineNum; starCount++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

    for (lineNum = 1; lineNum <= nn; lineNum++) {
        if (lineNum%2!=0){
            for (spaceCount = 1; spaceCount <= nn-lineNum; spaceCount++){
                cout<<" ";
            }
            for(starCount = 1; starCount <= lineNum; starCount++){
                cout<<"* ";
            }

            cout<<endl;
        }
    }
    return 0;
}