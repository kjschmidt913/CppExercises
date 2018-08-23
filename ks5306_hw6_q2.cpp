#include <iostream>
using namespace std;

void printPineTree(int n, char symbol);

int main(){
    int num;
    cout << "Please enter the number of triangles: ";
    cin >> num;
    
    char character;
    cout << "Please enter a character: ";
    cin >> character;
    
    cout << endl;
    printPineTree(num,character);
    
    return 0;
}

void printShiftedTriangle(int n, int m, char character){
    int i, j, countChar;
    
    for (i = 1, countChar=1; i <= n; i++, m--, countChar+=2){
        for (j = 1; j <= m; j++){
            cout << " ";
        }
        for (j = 1; j <= countChar; j++){
            cout << character;
        }
        cout << endl;
    }
}

void printPineTree(int n, char character){
    for (int i = 1; i <= n ; i++){
        printShiftedTriangle(i+1, n, character);
    }
}