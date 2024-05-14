#include<iostream>
using namespace std;
class ControlUnit{
    private:
    struct val{
        int capacity;
        int *ptr;
     };

       val *s;
    public:
  
    ControlUnit(int capacity){
        s=new val;
        s->capacity=capacity;
        s->ptr=new int[s->capacity];

    }
    void addElements(int at_index,int data){
        if(at_index>=0 && at_index<=s->capacity-1)
        s->ptr[at_index]=data;
        else
        cout<<"\n Array Index not valid";
    }
    void viewElement(int at_index,int &data){
        if(at_index>=0 && at_index<=s->capacity-1)

         data=s->ptr[at_index];
         else
         cout<<"\n arrau index is not valid";
    }
    void viewList(int at_index){
        for(int i=at_index;i<=s->capacity-1;i++)
        cout<<s->ptr[i]<<endl;
    }

};
int main(){
    int data;
    ControlUnit cu(3);
    cu.addElements(0,12);
    cu.addElements(1,22);
    cu.addElements(2,92);
    // cu.viewElement(1,data);
    // cout<<data<<endl;
    cu.viewList(0);

}