#include<iostream>
using namespace std;

class value{
    int*pai;
    
    private:
    int*a;
    int b;
    
public:
    value(){   
        a=new int; 
        *a=10;
        b=12;

    };
    ~value(){
        delete a;
    }
    public:
    void output(){
        cout<<*a<<endl;
        cout<<b<<endl;
    }
    
};
int main(){

    value v;
    v.output();
    
    


}