#include<iostream>
using namespace std;
void swap(int&m,int&n){
int temp=m;
m=n;
n=temp;

};
int main(){
    int m=10;
    int n=98;
    cout<<"before swaping values are\t"<<m<<endl;
    cout<<"before swaping values are\t"<<n<<endl;
    swap(m,n);
    cout<<"after swaping values are\t"<<m<<endl;
    cout<<"after swaping values are\t"<<n<<endl;
    


}