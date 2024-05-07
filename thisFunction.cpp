#include<iostream>
using namespace std;

class King{
    
    public:
    void call();
    
    void text(){
        cout<<"where are you ";
        this->call();
    }
    };
    void King::call(){
        cout<<"a";
        cout<<"b";
        cout<<"c";
    }

int main(){
    King obj;
    obj.text();
    return 0;
}