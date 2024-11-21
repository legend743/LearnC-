#include<iostream>
#include<iterator>
#include<list>
void display(std::list<int> &li){
    std::list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++){
        std::cout<<*it<<" ";
    }
}


int main(){
std::list<int> l1;
l1.push_back(10);
l1.push_back(99);
l1.push_back(76);
l1.push_back(59);
l1.push_back(10);
l1.push_back(33);
display(l1);







}