#include<iostream>
using namespace std;
int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;
     ptr1=new int;
    ptr2=new int;
    ptr3=new int;
    cout<<"Enter the value :"<<endl;
    cin>>*ptr1;
    cout<<"Enter the value :"<<endl;
    cin>>*ptr2;
    cout<<"Enter the value :"<<endl;
    cin>>*ptr3;
   
   int avg=(*ptr1+*ptr2+*ptr3)/3;
   cout<<"Average of three number is :"<<avg<<endl;
   delete ptr1;
   delete ptr2;
   delete ptr3;



}