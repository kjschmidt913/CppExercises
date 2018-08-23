#include <iostream>
#include <math.h>
using namespace std;

const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main(){
    double inputNum, outputNum;
    int method;
    
    cout<<"Please enter a Real number:"<<endl;
    cin>>inputNum;
    cout<<"Choose your rounding method:"<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round"<<endl;
    cout<<"3. Round to nearest whole number"<<endl;
    cin>>method;
    
    switch(method){
        case FLOOR_ROUND:
            outputNum = floor(inputNum);
            break;
        case CEILING_ROUND:
            outputNum = ceil(inputNum);
            break;
        case ROUND:
            outputNum = round(inputNum);
            break;
        default:
            cout<<"illegal input"<<endl;
            break;
    }
    
    cout<<outputNum<<endl;
        
    return 0;
}
