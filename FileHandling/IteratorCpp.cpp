#include<iostream>
#include<iterator>
#include<list>

int main(){
std::list<int> l1;
l1.push_back(10);
l1.push_back(99);
l1.push_back(76);
l1.push_back(59);
l1.push_back(10);
l1.push_back(33);
std::list<int>::iterator iter;
iter=l1.begin();

std::cout<<*iter<<" ";
iter++;
std::cout<<*iter<<" ";
iter++;
std::cout<<*iter<<" ";
iter++;
std::cout<<*iter<<" ";
iter++;






}