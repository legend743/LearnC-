#include<iostream>
using namespace std;
class eat{
    public:
    string Chips(){
        return "eating chips";
    }
};
class Drinks{
    public:
    string mix(){
        return "mix these drinks";
    }
};
class drinkingSoda:public Drinks{
    public:
    string mixwithSoda(){
        return "mix these drinks with soda\n";
    }
};
class drinkingNormalWater:public drinkingSoda,public eat
{
    public:
    string mixwithNormalWater(){
        return "mix these drinks with normal water\n";
    }
}
;
int main(){
    drinkingNormalWater dn;
    cout<<dn.mixwithSoda();
    cout<<dn.mixwithNormalWater();
    cout<<dn.Chips();
}