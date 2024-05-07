#include<iostream>
using namespace std;
class Parent
{
    public:
    string name1="Mohd";
};
class child : public Parent{
    public:
    string name2="Ali";
};



int main(){
    child ch;
    cout<<ch.name1<<" "<<ch.name2;
}