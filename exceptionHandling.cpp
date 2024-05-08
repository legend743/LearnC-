#include<iostream>
using namespace std;

int main(){
    cout<<"ENter the age\n";
    int age;
    cin>>age;
try{
    if(age>=16){
        cout<<"You are eligible to vote"<<endl;
    }else{
        throw(age);
    }
    
}catch(int e2){
    cout<<"You are not eligible to vote"<<endl;
}
}