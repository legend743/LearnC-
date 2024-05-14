#include<iostream>
using namespace std;
void funct(){
     static int a=10;
    int b=99;
    cout<<a<<endl;
    cout<<b<<endl;
    b=100;
    cout<<b<<endl;
  

}
int main(){
   funct();
    
    cout<<a;
}
