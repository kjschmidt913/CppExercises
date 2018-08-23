#include <iostream>
using namespace std;

const int DIMEVALUE = 10;
const int NICKELVALUE = 5;
const int QUARTERVALUE = 25;

int main(){
    int quarters, dimes, nickels, pennies, dollars, cents, totalValue;
    
    cout<<"Please enter number of coins: "<<endl;
    cout<<"# of quarters:"<<endl;
    cin>>quarters;
    cout<<"# of dimes:"<<endl;
    cin>>dimes;
    cout<<"# of nickels:"<<endl;
    cin>>nickels;
    cout<<"# of pennies:"<<endl;
    cin>>pennies;
    
    totalValue = (quarters * QUARTERVALUE) + (dimes * DIMEVALUE) + (nickels * NICKELVALUE) + pennies;
    
    dollars = totalValue/100;
    cents = totalValue % 100;
    
    
    cout<<"The total is " <<dollars<< " dollars and " <<cents<< " cents"<<endl;
    
    return 0;
}
