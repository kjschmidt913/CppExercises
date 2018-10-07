#include<iostream>
#include<sstream>
#include<string>
using namespace std;

bool stringOfInts(string str);
int main(){
    string subString,str;
    
    cout<<"Please enter any text or numbers: ";
    getline(cin,str);
    
    stringstream line(str);
    while(getline(line,subString, ' ')){
        if(stringOfInts(subString)){
            for(int i=0; i<subString.length(); i++)
                cout <<'x';
            cout <<' ';
        }
        else
            cout<<subString<<" ";
    }
    cout<<endl;
    return 0;
}

bool stringOfInts(string str){
    for(int i=0; i<str.length(); i++){
        if(str[i]>='0' && str[i]<='9'){
            continue;
        }else{
            return false;
        }
    }
    return true;
}