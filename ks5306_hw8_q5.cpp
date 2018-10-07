#include <iostream>
using namespace std;

int main() {
    string  name, first, last, middle, output;

    cout << "Please enter your name (first middle last): ";
    getline(cin,name);

    int firstSpace = name.find(' ', 0);
    first = name.substr(0,  firstSpace);
    int secondSpace = name.find(' ', firstSpace+1);

    if(secondSpace == -1){
        last = name.substr( firstSpace+1);
        output = last + ", " +  first ;
    } else {
        middle = name.substr( firstSpace+1, secondSpace- firstSpace-1);
        last = name.substr(secondSpace+1);

        output = last + ", " +  first + " " + middle.at(0) + ".";
    }

    cout<<output<<endl;
    return 0;
}