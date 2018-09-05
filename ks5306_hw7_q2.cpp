#include <iostream>
#include <cmath>

using namespace std;

void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs);
bool isPerfect(int num);
void findAmicable(int num, int max);

int main(){
    int num;
    
    cout<<"Please enter a positive integer >= 2: ";
    cin>>num;
    
    cout<<"Perfect numbers between 2 and "<<num<<" are: ";
    
    for (int i = 2; i <= num; i++){
        if (isPerfect(i)){
            cout<<i<<" ";
        };
    }
    cout<<endl;
    
    findAmicable(2, num);
    return 0;
}

void analyzeDivisors(int num, int& outCountDivs, int& outSumDivs) {
    int square_root = (int) sqrt(num);
    
    for (int i = 1; i <= square_root; i++) {
        if (num % i == 0){
            outSumDivs += i;
            outCountDivs++;
            
            if((i != 1) && (num/i != i) && (num/i > square_root)) {
                outSumDivs += num/i;
                outCountDivs++;
            }
        }
    }
}

bool isPerfect(int num){
    int count = 0;
    int sum = 0;
    analyzeDivisors(num, count, sum);
    return (num == sum);
}
bool isAmicable(int num1, int num2){
    int count1 = 0;
    int sum1 = 0;
    analyzeDivisors(num1, count1, sum1);
    int count2 = 0;
    int sum2 = 0;
    analyzeDivisors(num2, count2, sum2);
    
    return (num1 == sum2) && (num2 == sum1) && (num1 != num2);
}

void findAmicable(int num, int max){
    for(int i=num; i<=max; i++) {
        for(int j=i; j<=max; j++) {
            if(isAmicable(i, j)) {
                cout<<i<<" and "<< j <<" are amicable."<<endl;
            }
        }
        
    }
}
