#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void input(){
        cout<<"Enter the value of a"<<endl;
        cin>>a;
    }
    friend void max(A,B);
};
class B{
    int b;
    public:
    void input(){
        cout<<"Enter the value of b";
        cin>>b;
       
    }
     friend void max(A,B);
};
void max(A a,B b){
    if(a.a>b.b){
        cout<<"max is a\n"<<a.a;
    }
    else{
        cout<<"B is max\n"<<b.b;
    }
}
int main()
{
    A a;
    B b;
    a.input();
    b.input();
    max(a,b);
    return 0;


}