#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
int main(){
    std::vector<int> m_var={19,23,89,29};
    std::vector<int>::iterator iter;
    iter=m_var.begin();
    int size=m_var.size();
    for(int i=0;i<size;i++){
        
        std::cout<<*iter<<std::endl;
        iter++;
    }
    


}