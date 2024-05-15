#include<iostream>
using namespace std;
//this is basic and concept of overriding and early binding
// class A{
//     public:
//     void func(){
//         cout<<"This is base class";

//     }
// };
// class B :public A{
//     public:
//     void func(){
//         cout<<"This is derived class\n";
//     }
// };
//--------------------------------------Now come to virtual and late binding--------------------------------------------------

class A{
    public:
    virtual void func(){
        cout<<"this is virtual base class";
    }
};
class B: public  A{

    public:
    void func(){
        cout<<"This is inside derived class";
    }
};

int main(){
//  A aa;
//  aa.func();
B bb;
A *bptr;
A aa; //here you only need to change the object if you will make an object of A class then it will call A's function otherwise b's function
bptr=&aa;
bptr->func();
return 0;
}