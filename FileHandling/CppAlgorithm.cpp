#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<list>
int main(){
    std::vector<int> m_var={19,23,89,29};
    std::list<std::string> name;
    name.push_back("faisal");
    name.push_back("javed");
    std::list<std::string>::iterator it;
    std::vector<int>::iterator iter;
    it=name.begin();
    iter=m_var.begin();
    int size=m_var.size();
    for(int i=0;i<size;i++){
        
        std::cout<<*iter<<std::endl;
        std::cout<<*it<<std::endl;
        iter++;
        it++;
    }
    


}