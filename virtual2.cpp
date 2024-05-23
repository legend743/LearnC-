#include<iostream>
using namespace std;



class A{

public:
virtual void name(){
cout<<"This Base class";

}};

class B:public A{

public:
	void name(){
cout<<"this is derived class";


}
}
;
int main(){
A*bptr;
A aa;
bptr=&aa;
bptr->name();

return 0;

}