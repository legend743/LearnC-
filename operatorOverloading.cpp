#include<iostream>
using namespace std;
class overload{
    public:
    int o1+(int a,int b){
       return  cout<<"sum of two numbers is "<<a+b<<endl;

    }
    int o1+(int a,int b,int c){
       cout<<"sum of three numbers is "<<a+b+c<<endl;
    }


};

int main(){
overload o1;
o1.o1+(10,20);
o1.o1+(10,20,30);
}