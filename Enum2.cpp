#include<iostream>
using namespace std;
enum supercars{venom=1200,f1=900,Harley=4004,roadsatr=8720};
int main(){
    supercars s;
    supercars s2;
    s=venom;
    s2=Harley;
    if(s>s2){
        cout<<"s is faster than s2"<<endl;
    }else{
        cout<<"s2 is faster than s"<<endl;
    }
   
}
