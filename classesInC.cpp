#include<iostream>
using namespace std;
class Cons{
    public:
    int var=10;

};
int main(){
    Cons con;
    int l=con.var;
    cout<<l<<endl;
}