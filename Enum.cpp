#include<iostream>
using namespace std;
enum captain{Avi,Sid,Tantara,Junaira};
int main(){
    captain cap=Avi;
    if(cap==Sid){
        cout<<"Avi is the captain"<<endl;
    }else{
        cout<<"He is not our  captain";
    }
}