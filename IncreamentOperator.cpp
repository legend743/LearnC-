#include<iostream>
using namespace std;
class Incream{
    public:
    int a;
    Incream(){
        a=10;
    }
    int operator ++(){
       return a= a+90;
    }
    void display(){
        cout<<"Value :"<<a<<endl;
    }
};

int main(){
    Incream inc;
    ++inc;
    inc.display();
    return 0;

}