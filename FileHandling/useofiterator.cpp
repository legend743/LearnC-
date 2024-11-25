#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
#include<list>
#include<iterator>

int main(){
    std::list<int> la;
    la.push_back(89);
    la.push_back(70);
    la.push_back(77);
    std::list<int>::iterator iter;
    iter=la.begin();
    for(int i=0;i<la.size();i++){
        std::cout<<*iter;
        // std::cout<<""<<std::endl;
        std::cout<<std::endl;
        iter++;
    }

    la.sort();

    std::cout<<"After sorting"<<std::endl;

     iter=la.begin();
        for(int i=0;i<la.size();i++){
        std::cout<<*iter;
        // std::cout<<""<<std::endl;
        std::cout<<std::endl;
        iter++;
    }

}