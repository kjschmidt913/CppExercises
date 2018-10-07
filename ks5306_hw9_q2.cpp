#include <iostream>
using namespace std;

string remove(string str);
bool check_anagram(string str1, string str2);

int main(){
    string string1, string2, temp1, temp2;
    int result;
    
    cout<<"Please enter the first string: \n";
    getline(cin, string1);
    
    cout<<"Please enter the second string: \n";
    getline(cin, string2);
    
    temp1 = remove(string1);
    remove(string2);
    temp1=remove(string1);
    temp2=remove(string2);
    
    result = check_anagram(temp1, temp2);
    if(result){
        cout<<"The strings are anagrams"<<endl;
    }else{
        cout<<"The strings are not anagrams"<<endl;
    }
    
    return 0;
}

string remove(string str){
    int n[128];
    int count = 0;
    string temp;
    
    for (int i = 0; i<str.length(); i++){
        n[i]=str[i];
        if((n[i]>=65 && n[i]<=90)||n[i]<=122){
            str[count]=str[i];
            count++;
        }
    }
    temp=str.substr(0,count);
    return temp;
}

bool check_anagram(string str1, string str2){
    int first[26]={0}, second[26] = {0}, c = 0, n[128], m[128];
    
    while (c<str1.length()){
        n[c]=str1[c];
        if(n[c]>=97){
            first[n[c]-97]++;
        } else{
            first[n[c]-65]++;
        }
        c++;
    }
    c=0;
    
    while(c<str2.length()){
        m[c]=str2[c];
        if(m[c]>97){
            second[m[c]-97]++;
        }else{
            second[m[c]-65]++;
        }
        c++;
    }
    
    for(c=0;c<26;c++){
        if(first[c] != second[c]){
            return false;
        }
    }
    return true;
}

