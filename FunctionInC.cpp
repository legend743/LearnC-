#include<iostream>
using namespace std;
void Greeting(){
    cout<<"Good Morning everyone "<<endl;
}
void sum(int a,int b){
 int c;
 c=a+b;
 cout<<"the sume of numbers are:"<<c<<endl;

}
void Empsalary(int &salary){
    int Nsalary=5000;
    salary=Nsalary;
}
int product(int m,int n){
    return m*n;
}
int StoredVal(int x,int y){
    return x/y;
}

int main(){

   int salary=200;
    cout<<"Calling a function.....\n";
    Greeting();
    // call by value
    sum(20,40);
    //call by refrence
    Empsalary(salary);
    cout<<"Your new salary is:"<<salary<<endl;

    //return value
    cout<<"your product price is:"<<product(60,70)<<endl;

    //you can also store your values

    int storeValues=StoredVal(800,8);
    cout<<"new store values are:"<<storeValues+10;
}
