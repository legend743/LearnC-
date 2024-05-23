#include<iostream>
using namespace std;
class addsum{
    private:
    int a=90;
    int b=88;
    friend int sum(addsum add);
};
int sum(addsum add){
    int s= (add.a+add.b);
    return s;
};
//
int main(){
    addsum as;
   
    cout<<sum(as);

}