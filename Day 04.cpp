#include<iostream>
using namespace std;
int main (){
    int rows, choice,i,j;
    cout<<"enter total rows:";
    cin >> rows;
    cout<<"choose layout(1-3):\n";
    cout<<"1. VIP Box (square)\n";
    cout<<"2.Gallery (Triangle)\n";
    cout<<"3. Executive Inverted(Inverted Triangle)\n";
    cin>> choice;
    cout<<"\n Output:\n";

    if (choice==1){
        for(int i=1;i<=rows;i++){
            for(j=1;j<=rows;j++){
                cout<<"*";

            }
            cout<<endl;

        }
    }

    else if (choice==2){
        for(int i=1;i<=rows;i++){
            for(j=1;j<=i;j++){
                cout<<"*";

            }
            cout<<endl;

        }
    }
    else if (choice==3){
        for(int i=rows;i>=1;i--){
            for(j=1;j<=i;j++){
                cout<<"*";

            }
            cout<<endl;
        

        }
    }
    else{
        cout<<"invalid choice!:";
    }
    cout<<"\n---LAYOUT GENERATED---"<<endl;


      
    return 0;

    }
