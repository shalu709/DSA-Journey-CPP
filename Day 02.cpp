#include<iostream>
using namespace std;
int main (){
    double billAmount;
    int tipPercentage;
    int numPeople;
    cout<<"enter total bill Amount:";
    cin>>billAmount;
    cout<<"enter TipPercentage:";
    cin>>tipPercentage;
    cout<<"enter no.of people:";
    cin>>numPeople;
    double tipAmount =billAmount*tipPercentage/100;
    double finaltotal=billAmount+tipPercentage;
    double perPerson=finaltotal/numPeople;
    cout<<"\n RECEIPT"<<endl;
    cout<<"TOTAL Tip added:"<<tipAmount<<endl;
    cout<<"final Bill Total:"<<finaltotal<<endl;
    cout<<"each person pays bill:"<<perPerson<<endl;
    return 0;

    }
