#include <iostream>
using namespace std;

int printMonthCalendar (int numOfDays, int startingDay);
bool isLeapYear(int year);
void printYearCalendar(int year, int startingDay);

int main(){
    int year, startingDay;
    string day;
    
    cout<<"Please enter the year and what day of the week the year begins (example: 2016 Sun): ";
    cin>>year>>day;
    
    if(day == "Mon" || day == "mon"){
        startingDay = 1;
    } else if(day == "Tue" || day == "tue"){
        startingDay = 2;
    } else if(day == "Wed" || day == "wed"){
        startingDay = 3;
    }else if(day == "Thu" || day == "thu"){
        startingDay = 4;
    }else if(day == "Fri" || day == "fri"){
        startingDay = 5;
    }else if(day == "Sat" || day == "sat"){
        startingDay = 6;
    }else if(day == "Sun" || day == "sun"){
        startingDay = 7;
    }
    
    printYearCalendar(year, startingDay);
    
    
    return 0;
}

int printMonthCalendar (int numOfDays, int startingDay){
    string day;
    int lastDayInMonth = 0;
    int daysRemaining= numOfDays -1;
    int weeksRemaining = 0;
    
    //print the header
    cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\t"<<endl;
    
    //print any starting tabs
    switch (startingDay) {
        case 1:
            day = "Mon";
            break;
        case 2:
            day = "Tue";
            cout<<"\t";
            break;
        case 3:
            day = "Wed";
            cout<<"\t\t";
            break;
        case 4:
            day = "Thu";
            cout<<"\t\t\t";
            break;
        case 5:
            day = "Fri";
            cout<<"\t\t\t\t";
            break;
        case 6:
            day = "Sat";
            cout<<"\t\t\t\t\t";
            break;
        case 7:
            day = "Sun";
            cout<<"\t\t\t\t\t\t";
            break;
        default:
            break;
    }
    
    //To print the first row in calendar
    for (int i=1; i<=8-startingDay; i++){
        cout<<numOfDays - daysRemaining<<"\t";
        daysRemaining --;
    }
    cout<<endl;
    
    weeksRemaining = daysRemaining/7;
    //To print weeks that have all 7 days
    for (int weeks = 1; weeks <= weeksRemaining; weeks++){
        for (int j = 1; j<= 7; j++){
            cout<<numOfDays - daysRemaining<<"\t";
            daysRemaining--;
        }
        cout<<endl;
    }
    
    //To print remaining days
    for (int k = 1; k<=7; k++){
        if (daysRemaining < 0){
            cout<<"\t";
        } else{
            cout<<numOfDays - daysRemaining<<"\t";
            daysRemaining--;
            //to get the last weekday in the month
            lastDayInMonth++;
        }
    }
    cout<<endl;
    
    return lastDayInMonth;
}

bool isLeapYear(int year){
    if (year/4 == 0 && year/100 != 0){
        return true;
    } else if (year/4 == 0 && year/400 == 0){
        return true;
    } else{
        return false;
    }
}

void printYearCalendar(int year, int startingDay){
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    //check if it's a leap year
    if(isLeapYear(year)){
        days[1] = 29;
    }
    //loop through month array
    for(int i=0; i<12; i++){
        cout<<months[i]<<" "<<year<<endl;
        startingDay = printMonthCalendar(days[i], startingDay);
        cout<<endl;
    }
}



