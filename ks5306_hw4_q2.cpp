#include <iostream>

using namespace std;

int main(){

    int num, m, d, c, l, x, v, i, n, number;
    
    cout<<"Enter decimal number:";
    cin>>number;
    
    num = number;
    
    m = num / 1000;
    d = ((num%1000)/500);
    c = ((num%500)/100);
    l = ((num%100)/50);
    x = ((num%50)/10);
    v = ((num%10)/5);
    i = (num%5);
    
    n = m+d+c+l+x+v+i;
    
    cout<<number<<" is ";
    
    while (n > 0){
        for (m; m>0; m--){
            cout<< "M";
        }
        for (d; d>0; d--){
            cout<< "D";
        }
        for (c; c>0; c--){
            cout<< "C";
        }
        for (l; l>0; l--){
            cout<< "L";
        }
        for (x; x>0; x--){
            cout << "X";
        }
        for (v; v>0; v--){
            cout << "V";
        }
        for (i; i>0; i--){
            cout << "I";
        }
        n-=1;
    }
    
    return 0;
}
