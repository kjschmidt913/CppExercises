#include <iostream>
using namespace std;

bool isPalindrome(string str);
void Transform(string raw, string testStr);

int main(){
    string input;
        cout<<"Please enter a word: ";
        getline(cin, input);
    
    if(isPalindrome(input)){
        cout<<input<<" is a palindrome"<<endl;
    }else{
        cout<<input<<" is not a palindrome"<<endl;
    }
    return 0;
}

bool isPalindrome(string str){
    int len = str.length();
    int k = 0;
    int j=len-1;
    while(k<=j){
        if(str[k]!=str[j]){
            return false;
        }
        k++;
        j--;
    }
    return true;
}
