#include <iostream>
using namespace std;

string* createWordsArray(string sentence, int& outWordsArrSize);

int main(){

    string sentence;
    int outWordsArrSize = 0;
    string* words;

    cout<<"Please enter a sentence: ";
    getline(cin, sentence);

    words = createWordsArray(sentence, outWordsArrSize);

    cout<<"There are "<<outWordsArrSize<<" words in your sentence"<<endl;
    return 0;
}

string* createWordsArray(string sentence, int& outWordsArrSize){
    for (int i = 0; i < sentence.length(); i++){
        if (sentence[i] == ' '){
            outWordsArrSize++;
        }
    }
    outWordsArrSize++;

    string* words = new string[outWordsArrSize];
    int counter = 0;
    for (int i = 0; i < sentence.length(); i++){
        if (sentence[i] == ' '){
            counter++;
            i++;
        }
        words[counter] += sentence[i];
    }
    return words;
}
