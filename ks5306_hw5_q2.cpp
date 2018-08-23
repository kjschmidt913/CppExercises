#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    int num, low, high, guess, count;
    srand(time(0));
    num = (rand() % 100) + 1;
    low = 1;
    high = 100;
    count = 5;
    cout<<"I thought of a number between 1 and 100! Try to guess it."<<endl;
    
    while(count > 0){
        cout<<"Range: [" << low << ", " << high << "], Number of guesses left: " <<count<<endl;
        cout<<"Your guess: ";
        cin>>guess;
        if(guess == num){
            cout<<"Congrats! You guessed my number in "<<6 - count<<" guesses."<<endl;
            break;
        } else if(guess < num && count != 1){
            low = guess;
            cout<<"Wrong! My number is bigger."<<endl;
        } else if(guess > num && count != 1){
            high = guess;
            cout<<"Wrong! My number is smaller."<<endl;
        }
        
        count--;
        
        if(count == 0){
            cout<<"Out of guesses! My number is "<<num<<endl;
        }
    }

    return 0;
    
}