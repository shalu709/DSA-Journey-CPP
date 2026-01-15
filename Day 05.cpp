#include<iostream>
using namespace std;
double celsiusToFahrenheit(double c){
    return(c*9/5)+32;
}
bool isEven(int n){
    return n%2==0;
}
void printBill(int units){
    int bill=units*10;
   cout <<"Electricity Bill: Rs"<<bill<<endl;
}
int main (){
    int choice;
    cout<<"---SMART HOME DASHBOARD---"<<endl;
    cout<<"1.Temperature Converter"<<endl;
    cout<<"2.Check Even/Odd"<<endl;
    cout<<"3.Print Electricity Bill"<<endl;
    cout<<"Choose an Option:"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    if (choice==1){
        double c;
        cout<<"enter temperature in celsius:";
        cin>>c;
        double f=celsiusToFahrenheit(c);
        cout<<"System Response:"<<c<<"C is"<<f<<"F "<<endl;
    }
    else if (choice ==2){
        int num;
        cout<<"enter a number:";
        cin>>num;
        if(isEven(num))
        cout<<"System Respone:Number is Even"<<endl;
        else
        cout<<"System Respone:Number is Odd"<<endl;
    }
    else if (choice==3){
        int units;
        cout<<"enter electricity units:";
        cin>> units;
        printBill(units);
        
    }
    else{ 
            cout<<"invalid choice!"<<endl;
        }


       return 0;

    }
