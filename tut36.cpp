#include<iostream>
using namespace std;

class base{
    int data1;
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();

};
void base::setdata(){
    data1=10;
    data2=20;
}
int base:: getdata1(){
    return data1;
}
int base:: getdata2(){
    return data2;
}


class Derived : public base{
    int data3;
    public:
        void process();
        void display();
};
void Derived :: process(){
    //setdata();//we can set data in process if needed ********read after reading main*******
    data3 = data2 * getdata1();//here we cant directally use data 1 since its private
}
void Derived :: display(){
    cout<<"value of data1 : "<<getdata1()<<endl;//we cant use data1 directally since private in base
    cout<<"value of data2 : "<< data2 <<endl;//we can use data2 and data3 since in derived class 
    cout<<"value of data3 : "<< data3 <<endl;
}


int main(){
    
    Derived der;
    der.setdata();//coment this line out if using setdata in line 32
    der.process();
    der.display();

    return 0;

}