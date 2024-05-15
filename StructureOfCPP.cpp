#include<iostream>
using namespace std;
class stud{
    private:
    int a;
    int b;
public:
void setval(int a,int b){
    this->a=a;
    this->b==b;
}
int getVal(){
    return a;
}
};
int main(){
stud s;
s.setval(10,29);
cout<<s.getVal();
}