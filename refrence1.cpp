#include<iostream>
using namespace std;
void calci(int &a){
    a=a+1;
};
int main(){
    int a=90;
    calci(a);
    cout<<a;
}