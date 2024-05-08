#include<iostream>
using namespace std;
int main(){
    int num;
    int denum;
    int output;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Enter the denum: ";
    cin>>denum;
    try{
    if(denum==0){
        throw(denum);
    }else{
        output=num/denum;
                    cout<<"The output is: "<<output;
    }
    }catch(int d){
        cout<<"The denum must be greater than zero";
    }
}