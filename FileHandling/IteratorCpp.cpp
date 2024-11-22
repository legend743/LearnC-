#include<iostream>
#include<iterator>
#include<list>
#include<algorithm>

void display(std::list<int> &li){
    std::list<int>::iterator it;
    for(it=li.begin();it!=li.end();it++){
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}


int main(){
std::list<int> l1;//it has 0 elements
l1.push_back(10);
l1.push_back(99);
l1.push_back(76);
l1.push_back(59);
l1.push_back(10);
l1.push_back(33);

display(l1);
// l1.pop_back(); //these are the function to remove the elements from back
// l1.pop_front(); //these are those to remove from front
// l1.remove(59);    //and these are those to remove any element from mid
// l1.sort();
// display(l1);



std::list<int>l2(3); //it has 3 elements but empty values

std::list<int>::iterator iter;
int a;
iter=l2.begin();
for(int i=0;i<3;i++){
    std::cout<<"Enter the element: ";
    std::cin>>a;
   *iter=a;
   iter++;

}

display(l2);
//merging the two list
l1.sort();
l2.sort();
l2.merge(l1);
std::cout<<"List after merging"<<std::endl;
display(l2);

l2.splice(l2.end(),l1);


display(l2);



}