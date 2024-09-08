#include<iostream>
#include<conio.h>
using namespace std;

class Time{
    int h,m;
    public:
    void getData(){
        cout<<"Enter hour and Minutes"<<endl;
        cin>>h>>m;
    }
    void putData(){
        cout<<"Hours:"<<h<<"\t"<<"Minutes:"<<m;
    }
    void addTime(Time T1, Time T2){
        h=(T1.m+T2.m)/60;
        m=(T1.m+T2.m)%60;
        h=h+(T1.h+T2.h);
        
    }
};
int main(){
     Time t1,t2,t3;
    cout<<"Program initializing......"<<endl;
   
    t1.getData();
    t2.getData();
    t3.addTime(t1,t2);
    t3.putData();


}