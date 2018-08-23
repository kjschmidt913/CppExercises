#include <iostream>
using namespace std;

const int HOURSINDAY = 24;
const int MINUTESINHOUR = 60;


int main(){
    int johnDays, johnHours, johnMinutes, billDays, billHours, billMinutes, totalDays, totalHours, totalMinutes, extraDays, extraHours;
    
    cout<<"Please enter the number of days John has worked:"<<endl;
    cin>>johnDays;
    cout<<"Please enter the number of hours John has worked:"<<endl;
    cin>>johnHours;
    cout<<"Please enter the number of minutes John has worked:"<<endl;
    cin>>johnMinutes;
    cout<<"Please enter the number of days Bill has worked:"<<endl;
    cin>>billDays;
    cout<<"Please enter the number of hours Bill has worked:"<<endl;
    cin>>billHours;
    cout<<"Please enter the number of minutes Bill has worked:"<<endl;
    cin>>billMinutes;
    
    totalDays = johnDays + billDays;
    totalHours = johnHours + billHours;
    extraDays = totalHours/HOURSINDAY;
    totalDays = extraDays + totalDays;
    totalHours = totalHours - (extraDays * HOURSINDAY);
    
    totalMinutes = johnMinutes + billMinutes;
    extraHours = totalMinutes/MINUTESINHOUR;
    totalHours = totalHours + extraHours;
    totalMinutes = totalMinutes - (extraHours * MINUTESINHOUR);
    
    
    cout<<"The total time both of them worked together is: " <<totalDays<< " days, " <<totalHours<< " hours and " <<totalMinutes<< " minutes."<<endl;
    
    return 0;
}
