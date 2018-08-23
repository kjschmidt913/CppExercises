#include <iostream>
using namespace std;

const double WEEKENDRATE = .15;
const double WEEKDAYRATE = .4;
const double OFFHOURSRATE = .25;

int main(){
    int startTimeHours, startTimeMinutes, callLength;
    double cost;
    char opp;
    string day;
    
    cout<<"Please enter the time the call started in 24 hour format:"<<endl;
    cin>>startTimeHours>>opp>>startTimeMinutes;
    cout<<"Please enter the day of the week using this format- Mo Tu We Th Fr Sa Su:"<<endl;
    cin>>day;
    cout<<"Please enter the length of the call in minutes:"<<endl;
    cin>>callLength;
    
    if ((day == "Sa") || (day == "sa") || (day == "Su") || (day == "su")){
        cost = callLength * WEEKENDRATE;
    } else if((startTimeHours < 8) || (startTimeHours > 18)){
        cost = callLength * OFFHOURSRATE;
    } else if ((startTimeHours >= 8) || (startTimeHours <= 18)){
        cost = callLength * WEEKDAYRATE;
    }
    
    cout<<"The cost of your call is $"<<cost<<endl;
    
    return 0;
}
