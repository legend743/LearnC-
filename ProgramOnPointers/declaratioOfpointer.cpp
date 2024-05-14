#include<iostream>
using namespace std;

class value{
    private:
    int a;
    int b;
public:
    value(){    
        a=10;
        b=12;

    }
    public:
    void output(){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    
};
int main(){

    value v;
    v.output();
    
    


}