#include<iostream>
using namespace std;
class virtualV{
    public:
    virtual void display(){
        cout<<"This is a virtual function"<<endl;
    }
};
class virtually: public virtualV{
    public:
    void display(){
        cout<<"This is a non virtual function"<<endl;
    }
};


int main(){
    virtualV vrt;
    vrt.display();
}