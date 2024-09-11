#include<iostream>
using namespace std;
class xyz{
    int a=20;
    int b=90;
    public:
    void systemOn(){
        cout<<"This base class"<<endl;

    }
};
 class abc: private xyz{


};

int main(){
    xyz xx;
    xx.systemOn();

}