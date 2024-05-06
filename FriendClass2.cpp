#include<iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    friend class B;
public:
    A(){
        a=10;
    }
       int getValue() { // Define a function to return the value of 'a'
        return a;
    }
};
class B{
    private:
    int b;
    public:
    B(){
        b=20;
    }
   int product(){
    A valu;
    return valu.a;
   }
};
int main(){
    B b;
    cout<<"Product:\n";
    cout<<b.product();
    return 0;

}