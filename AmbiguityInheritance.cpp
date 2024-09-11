 #include<iostream>
 using namespace std;

 ///  reason of this code is to check how cpp solve the ambiguity but you no need to worrt because cpp 
 /// consider its first founded method inside it if not found then it goes to its inherited if there it will get
 /// then it return from there else goes to parent of inherited clas and so on.
 class A{
    protected:
    int a;
    public:
    void getA(int a){
        this->a=a;


    }
    void output(){
        cout<<a<<endl;
    }
 };
 class B{
    protected:
    int b;
    public:
    void getA(int b){
this->b=b;
    }
    void showdata(){
        cout<<b<<endl;
    }
 };
 class C:public A,public B{
    private:
    int c;
    public:
    void inputData(int c){
        cout<<"This is your Last class!!"<<endl;
        this->c=c;
        A::getA(c);
        B::getA(c);
    }
    


 };
 int main(){
    C cc;
    //here when you are calling the  fucntion because of ambiguity it first call the fnction inside C's class object
    // if that function is not there then it will call it from its inherited class,and return the most retun function output.
    //but if  you want that it have to call all the function then  you should cal it inisde your Class C's function.
    cc.inputData(10);
    cc.showdata();
    cc.output();
    
 }