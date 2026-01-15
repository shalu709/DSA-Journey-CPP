#include<iostream>
using namespace std;
int main (){
    int speedlimit;
    int carSpeed;
    int totalChallans=0;
    cout<<"enter the Speed limit for this road:";
    cin>>speedlimit;
    for(int i=1;i<=5;i++){
        cout<<"\n enter the Speed for car"<<i<<":";
        cin>>carSpeed;
        if(carSpeed<=speedlimit){
            cout<<"no fine:"<<endl;

        }
        else{ 
            int fine=(carSpeed-speedlimit)*100;
            cout<<"over Speeding ! Fine: Rs"<<fine<<endl;
            totalChallans++;
        }
    }
    cout<<"\nEND OF DAY REPORT"<<endl;
    cout<<"\nTotal challans Generated:"<<totalChallans<<endl;
    return 0;

    }
