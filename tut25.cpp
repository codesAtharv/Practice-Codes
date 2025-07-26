#include<iostream>
using namespace std;

class complex;
class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumrealcomplex(complex,complex);
    int sumimgcomplex(complex,complex);
};
class complex{
    int a, b ;
    friend class calculator;//DO this if you want to give permission to all objects of calculator
    friend int calculator :: sumrealcomplex(complex,complex);
    friend int calculator :: sumimgcomplex(complex,complex);
    
    public:
    void setno(int n1,int n2){
        a=n1;
        b=n2;
    }
    void printno(){
        cout<<"Thr sum of complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int calculator:: sumrealcomplex(complex o1,complex o2){
    return (o1.a+o2.a);
}
int calculator:: sumimgcomplex(complex o1, complex o2){
    return (o1.b+o2.b);
}

int main(){
    complex o1,o2;
o1.setno(1,5);
o2.setno(5,7);
calculator calc;
int img=calc.sumimgcomplex(o1,o2);
int res=calc.sumrealcomplex(o1,o2);
cout<<"the sum of real part of complex no is :"<<res<<endl;
cout<<"the sum of img part of complex no is :"<<img<<endl;




    return 0;
}