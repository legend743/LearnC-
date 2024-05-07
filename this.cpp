#include<iostream>
using namespace std;
class A{


    private:
    int x;
    int y;
    int z;
    public:
    void set(int x ,int y,int z){
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void print(){
        cout<<"value of x is:"<<x<<endl;
        
        cout<<"value of y is:"<<y<<endl;
        
        cout<<"value of z is:"<<z<<endl;
        
    }
};



int main(){
 A obj;
 obj.set(10,20,30);
 obj.print();


}