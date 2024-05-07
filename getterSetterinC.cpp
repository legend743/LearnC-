#include<iostream>
using namespace std;

class Billboard{

    private:
    string Title;
    public:

    void setTitle(string title){

        Title=title;

    }
    string getTitle(){
        return Title;
    }

};
int main(){
    Billboard bill;
    bill.setTitle("This is my billboard ");
    cout<<bill.getTitle();
}