#include<iostream>
#include<map>
#include<iterator>
#include<string>

int main(){
    std::map<int,std::string> contatcs_details;
    auto it=contatcs_details.begin();
    // contatcs_details.insert(it,std::make_pair(1,"Faisal"));
    contatcs_details.insert(it,{2,"Javed"});
    contatcs_details.insert(it,{3,"Junaid"});

    //Details of Map
    for(const auto& [key,value]:contatcs_details){
        std::cout<<key<<":"<<value<<std::endl;
    }

    // --------------------------------------------------
    for (auto &&i :contatcs_details ){
        std::cout<<i.first<<" "<<i.second<<std::endl;

    }
    {
        
    }
    

}