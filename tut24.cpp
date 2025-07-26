#include<iostream>
using namespace std;
class complex{
    int a , b;
    friend complex sumcomplex(complex o1, complex o2);//here now sumcomplex can use data of complex private 

public:
    void setdata(int v1, int v2){
        a=v1;
        b=v2;
    
    }
    void printno(){
        cout<<"Your complex number is :"<<a<<"+i"<<b<<endl;


    }
};
//creating a friend
complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));//here sumcomplex cant use complex private data
    return o3;  
}



int main(){
    complex c1,c2,c3;
    c1.setdata(3,4);
    c1.printno();
    c2.setdata(3,5);
    c2.printno();
    c3=sumcomplex(c1,c2);
    c3.printno();


    return 0;
}
//properties of friend
// not in the scope of class 
// since not in class scope it cannot be called from the objects of that class so
// c1.sumcomplex()==invalid syntax
// can be invoked withoyt help of any is_object
// it can be declared inside public or private both 