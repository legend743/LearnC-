#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    return a*=b+c;
}
void swap(int m,int n){
    int temp=m;
     m=n;
     n=temp;
    cout<<m<<" " <<n;

}

int main()
{
   
    cout<<sum(7,8)<<endl;
    cout<<sum(7,8,9)<<endl;
    swap(10,20);

}