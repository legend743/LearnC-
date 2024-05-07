#include<iostream>
using namespace std;
class Car{
    public:
    int speed(){
        return 100;
    }
    string color(){
        return "red";
    }
};

class MercedesBenz:public Car{
    public:
    int speed(){
        return 200;
    }
};
class Ferari:public Car{
    public:
    int speed(){
        return 500;
    }
};

int main(){
Ferari fr;
cout<<"Ferari speed is "<<fr.speed()<<endl;
cout<<"Ferari color is "<<fr.color()<<endl;

MercedesBenz mb;
cout<<"MercedesBenz speed is "<<mb.speed()<<endl;
cout<<"MercedesBenz color is "<<mb.color()<<endl;
}