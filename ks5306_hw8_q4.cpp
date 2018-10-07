#include <iostream>
using namespace std;

int main() {
    int pin[5] = {6, 9, 4, 4, 0};
    int random_nums[10];
    int entered_pin[5];
    int num;
    bool correct = true;
    
    srand(time(NULL));
    
    for(int i=0;i<10;i++){
        random_nums[i]=(int) rand()%3 +1;
    }
    
    cout<<"Please enter your PIN according to the following mapping:"<<endl;
    cout<<"PIN: 0 1 2 3 4 5 6 7 8 9 "<<endl;
    cout<<"NUM: ";
    for(int i=0;i<10;i++){
        cout<<random_nums[i]<<" ";
    }
    cout<<endl;
    
    cin>>num;
    
    entered_pin[4]=num%10;
    entered_pin[3]=(num/10)%10;
    entered_pin[2]=(num/100)%10;
    entered_pin[1]=(num/1000)%10;
    entered_pin[0]=num/10000;
    
    for (int i=0; i<5; i++){
        if(entered_pin[i] != random_nums[pin[i]]){
            correct = false;
        }
    }
    if(correct){
        cout<<"Your PIN is correct"<<endl;
    } else{
        cout<<"Your PIN is not correct"<<endl;
    }

    return 0;
}
