#include<iostream>
using namespace std;

class Animal{
    public:
    void speed(){
        cout<<"Who is faster on earth\n";
    };
};
class Cheetah{

    public:

    void speed(){
        cout<<"I am faster on ground\n";
    }
};
class Dolphine{
    public:
    void speed(){
        cout<<"I am faster in water\n";
    }
};

int main(){
    Animal a;
    Cheetah c;
    Dolphine d;
    a.speed();
    c.speed();
    d.speed();

}