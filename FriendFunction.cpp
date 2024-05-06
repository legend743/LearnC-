#include<iostream>
using namespace std;
class Salary{
    private :
    int sal;
    friend int increament(Salary s);
};
int increament(Salary s){
    s.sal=s.sal+11000;
    return s.sal;
}


int main(){
    Salary s;
    cout<<"Increament is: ";
    cout<<increament(s);
    return 0;

}