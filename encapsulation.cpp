#include<iostream>
using namespace std;
class Company{
    private:
    int salary;
    public:
    void setSalary(int a){
    salary=a;
    }
    public:
    int getSalary(){
        return salary;
    
    }
};



int main(){
    Company obj;
    obj.setSalary(4000);
    cout<<"Salary is : "<<obj.getSalary()<<endl;
    return 0;
}