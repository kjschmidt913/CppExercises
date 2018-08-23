#include <iostream>
using namespace std;

const double CARDDISCOUNT = 0.90;

int main(){
    double firstItem, secondItem, taxRate, basePrice, priceAfterDiscounts, totalPrice, addedTax, bogo;
    string clubCard;
    
    cout<<"Enter price of first item:"<<endl;
    cin>>firstItem;
    cout<<"Enter price of second item:"<<endl;
    cin>>secondItem;
    cout<<"Does the customer have a club card? (Y/N):"<<endl;
    cin>>clubCard;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax:"<<endl;
    cin>>taxRate;
    
    basePrice = firstItem + secondItem;
    
    if(firstItem > secondItem){
        secondItem /= 2;
    } else{
        firstItem /= 2;
    }
    
    bogo = firstItem + secondItem;
    
    if ((clubCard == "y") || (clubCard == "Y")){
        priceAfterDiscounts = bogo * CARDDISCOUNT;
    } else{
        priceAfterDiscounts = bogo;
    }
    
    addedTax = (taxRate/100) * priceAfterDiscounts;
    totalPrice = priceAfterDiscounts + addedTax;
        
    cout<<"Base Price: " <<basePrice<<endl;
    cout<<"Price After Discounts: " <<priceAfterDiscounts<<endl;
    cout<<"Total Price " <<totalPrice<<endl;
        
    return 0;
}
