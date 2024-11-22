#include<iostream>
#include<map>
#include<string>
#include<iterator>
int main(){

    std::map<std::string, int> localMap{{"Mobile",1600},{"Ram",12}};
   std::map<std::string,int>::iterator iter;
   for(iter=localMap.begin();iter!=localMap.end();iter++){
        std::cout<<(*iter).first<<" "<<(*iter).second<<" ";
   }
}