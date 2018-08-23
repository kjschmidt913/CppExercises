#include <iostream>
using namespace std;

const int CONVERSIONFACTOR = 703;

int main(){
    double weight, height, BMI;
    string weightStatus;
    
    cout<<"Please enter weight (in pounds):"<<endl;
    cin>>weight;
    cout<<"Please enter height (in inches):"<<endl;
    cin>>height;

    BMI = weight/height/height * CONVERSIONFACTOR;
    
    if(BMI < 18.5){
        weightStatus = "underweight";
    } else if ((BMI > 18.5) && (BMI < 25)){
        weightStatus = "normal";
    } else if ((BMI >= 25) && (BMI < 30)){
        weightStatus = "overweight";
    } else {
        weightStatus = "obese";
    }
 
    cout<<"The weight status is: " <<weightStatus<<endl;
        
    return 0;
}
