#include<iostream>
using namespace std;
//Multiple Inheritance
class base1{
    protected:
    int base1int;
    public:
    void setbase1int(int a){
        base1int=a;
    }
};
class base2{
    protected:
    int base2int;
    public:
    void setbase2int(int a){
        base2int =a;
    }
};

class base3{
protected:
    int base3int;

public:
    void setbase3int(int a)
    {
        base3int = a;
    }
};
class derived : public base1,public base2,public base3{//*********** */
    public:
    void show(){
        cout<<"The value of base1 is "<<base1int<<endl;
        cout<<"The value of base2 is "<<base2int<<endl;
        cout<<"The value of base3 is "<<base3int<<endl;
        cout<<"The value of sum these is "<<base1int+base2int+base3int<<endl;
    }
};
int main(){
    derived atharv;
    atharv.setbase1int(22);
    atharv.setbase2int(2);
    atharv.setbase3int(6);
    atharv.show();


    
    return 0;
}