#include <iostream>
using namespace std;

int main(){
    int graduationYear, currentYear, difference;
    string schoolYear, name;
    
    cout<<"Please enter your name:"<<endl;
    cin>>name;
    cout<<"Please enter your graduation year:"<<endl;
    cin>>graduationYear;
    cout<<"Please enter current year:"<<endl;
    cin>>currentYear;
    
    difference = graduationYear - currentYear;
    
    if ((graduationYear == currentYear) || (difference <= 0)){
        schoolYear = "graduated";
    } else if (difference > 4){
        schoolYear = "not in college yet";
    } else {
        switch (difference){
            case 4:
                schoolYear = "a freshman";
                break;
            case 3:
                schoolYear = "a sophomore";
                break;
            case 2:
                schoolYear = "a junior";
                break;
            case 1:
                schoolYear = "a senior";
                break;
            default:
                cout<<"illegal input"<<endl;
                break;
        }
    }
 
    cout<<name<< " you are " <<schoolYear<<endl;
        
    return 0;

    
}
