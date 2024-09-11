#include<iostream>
using namespace std;

class inheritaceA{
    int a=10;
    public:
    int getA(){
        return a;
    }
};

class interitanceB:public inheritaceA{
    int b=19;
    int getB(){
        return b;
    }
};

class SimpleInheritance{
    public:
void NoArguments(){
    cout<<"This class is used for demo of multipul inheritanc!!"<<endl;
}
};
class MultipleInheritance:public inheritaceA,public SimpleInheritance{

    public:
    void getAlldetails(){
        cout<<"You are getting all class details  here:"<<endl;
    }
};

int main(){
    interitanceB b;
    MultipleInheritance mI;
    cout<<b.getA()<<endl;
    mI.getAlldetails();
    mI.NoArguments();

}