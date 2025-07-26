//default and setted templates
#include<iostream>
using namespace std;

template<class t1=int,class t2=char,class t3=float>
class atharv{
    public:
    t1 a;
    t2 b;
    t3 c;
    atharv(t1 x,t2 y,t3 z){
        a=x;
        b=y;
        c=z;

    }
    void display(){
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
    }
};

int main(){
    
    //With Default templated
    atharv<> obj(7,'c',4.4);
    cout<<"With default Templeted"<<endl;
    obj.display();
    cout<<endl;
    
    //With Setted templated
    cout<<"With setted Template"<<endl;
    atharv<char,double,string> obj2('D',45.4,"Bday");
    obj2.display();
    
    return 0;
}