#include<iostream>
using  namespace std;


class community
{
    community(){
        cout<<"Hello brother i am constructor"<<endl;
        }
    ~community(){
        cout<<"Hello brother i am destructor"<<endl;

    }
    public:
       void game(){
        cout<<"This is your game class method"<<endl;
        };
};
int main(){
    community obj;
    
}