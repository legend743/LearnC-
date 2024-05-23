#include<iostream>
using namespace std;
class demofriend;
class demo{
    private:
    int a;
    friend class demofriend;
    public:
   demo(){
    a=21;
   }
    
};
class demofriend{
    private:
    int n2;
    public:
    demofriend(){
        n2=90;
    }
    int avg(){
        demo dd;
        return dd.a+n2;
    }

}
;

int main(){
    demofriend dd;
    cout<<dd.avg();
}