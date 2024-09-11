#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
    void getData();
    friend int sum(demo);

};

void demo::getData(){
    cout<<"Enter value:"<<"a"<<"&"<<"b"<<endl;
    cin>>a>>b;

}

int sum(demo aa){
    return aa.a+aa.b;
}



int main(){
    demo aa;
    aa.getData();
    int a=sum(aa);
    cout<<a;
    return 0;

}