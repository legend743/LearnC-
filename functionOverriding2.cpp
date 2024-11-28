#include<iostream>
using namespace std;
class overRide{
    public:
  void func(){
        cout<<"This is faisal"<<endl;
    };
};
class childOverRiide : public overRide{
    public:
     void func(){
        cout<<"this is overrided function"<<endl;

    };
    
};
   

int main(){
  overRide ov;
   ov.func();
    childOverRiide cOv;
    cOv.func();
}