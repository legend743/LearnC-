#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
     void getdata();
friend int sum(A);
};
void A::getdata(){
    cout<<"Enter two numbers:\n";
    cin>>a>>b;
    
}
int sum(A aa){
    return aa.a+aa.b;
}
int main(){
    A x;
    x.getdata();
    cout<<"Your sum is"<<sum(x)<< "";
    return 0;
}
