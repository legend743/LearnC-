#include<iostream>
using namespace std;
class Rectangle{
    private:
    double a;
    double b;
    public:
    Rectangle(){
        a=0;
        b=0;
    }
// constructor with parameter
    Rectangle(int a,int b){
        this->a=a;
        this->b=b;

    }
   double areaOfRectangle(){
    return a*b;
    }
};
int  main(){
    Rectangle rect;
    cout<<rect.areaOfRectangle()<<endl;
    Rectangle rect1(12,22.88);
    cout<<rect1.areaOfRectangle();

}