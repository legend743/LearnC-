#include<iostream>
#include<vector>
#include<algorithm>
int main(){
std::vector<int> v1;
v1.push_back(100);
v1.push_back(789);
v1.push_back(76);
std::cout<<v1[2]<<std::endl;

v1.pop_back();
std::cout<<v1[2]<<std::endl;

std::cout<<v1[2];


}