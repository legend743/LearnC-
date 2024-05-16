#include<iostream>
using namespace std;
class Time{

    int h,m;
    public:
    void getdata();
    void putdata();
    void addtime(Time, Time);
    
};
void Time::getdata(){
    cout<<"Enter h&m";
    cin>>h>>m;

}
void Time::putdata(){
    cout<<"hours:"<<h<<"\t min:"<<m;
    cout<<endl;
};
void Time :: addtime(Time t1,Time t2){
        h=(t1.m+t2.m)/60;
        m=(t1.m+t2.m)%60;
        h=h+(t1.h+t2.h);
    cout<<"Time:"<<h<<""<<"\t m"<<m<<endl;

}

    int main(){
        Time t,t1,t3;
        t.getdata();
        t1.getdata();
    
        t.putdata();
        t1.putdata();
            t3.addtime(t,t1);
       
        return 0;
    }

