#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a, b, c, xPlus, xMinus, x, discriminant;
    
    cout<<"Please enter value of a:"<<endl;
    cin>>a;
    cout<<"Please enter value of b:"<<endl;
    cin>>b;
    cout<<"Please enter value of c:"<<endl;
    cin>>c;
    
    discriminant = (b*b)-(4*a*c);
    
    if(a == 0){
        cout<<"This equation has no solutions"<<endl;
    }else if ((a == 0) && (b==0) && (c==0)){
        cout<<"This equation has infinite solutions"<<endl;
    }else if(discriminant < 0){
        cout<<"This equation has no real solutions"<<endl;
    }else if(discriminant > 0){
        xPlus = (b + sqrt(discriminant))/2;
        xMinus = (b - sqrt(discriminant))/2;
        cout<<"This equation has two real solutions x = " <<xPlus<< " and x = " <<xMinus<<endl;
    }else if(discriminant == 0){
        x = (b*1)/2;
        cout<<"This equation has a single real solution x = "<<x<<endl;
    }

    return 0;
}
