#include<iostream>
using namespace std;
class A{
    int a;
    int b;
    static int c;
    public:
    void init();
    void showdata();
};
int A::c;
void A::init(){
    cout<<"Enter the value of a and b";
    cin>>a>>b;
    c++;

}
void A::showdata(){
    cout<<"you will get difrrent value of a & b but c will always same"<<endl;
    cout<<a<<"\t"<<b<<"\t"<<endl;
    cout<<c;
}
int main(){
    A aa,bb;
  
    aa.init();
    bb.init();
    aa.showdata();
    bb.showdata();
    return 0;
}