#include <iostream>
using namespace std;

const int DIMEVALUE = 10;
const int NICKELVALUE = 5;
const int QUARTERVALUE = 25;

int main(){
    int dollarsInput, centsInput, quarters, centsOutput, dimes, nickels, pennies, quartersFromCents, quartersFromDollar;
    
    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollarsInput>>centsInput;
    
    quartersFromDollar = (dollarsInput * 100)/QUARTERVALUE;
    quartersFromCents = centsInput/QUARTERVALUE;
    quarters= quartersFromDollar + quartersFromCents;
    centsOutput = centsInput - (quartersFromCents * QUARTERVALUE);
    dimes = centsOutput/DIMEVALUE;
    centsOutput = centsOutput - (dimes * DIMEVALUE);
    nickels = centsOutput/NICKELVALUE;
    centsOutput = centsOutput - (nickels *NICKELVALUE);
    pennies = centsOutput;
    
    
    
    cout<<dollarsInput<< " dollars and " <<centsInput<< " cents are:" <<endl;
    cout<<quarters<< " quarters, "<<dimes<< " dimes, " <<nickels<< " nickels, and " <<pennies<< " pennies"<<endl;
    
    return 0;
}
