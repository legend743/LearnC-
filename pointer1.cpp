#include<iostream>
using namespace std;
int main(){
    int val=88;
    int *ptr;
    ptr=&val;
    cout<<"your pointer address:"<<ptr;
    cout<<"\n your pointer value"<<*ptr;
}