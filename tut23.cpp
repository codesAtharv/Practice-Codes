#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
public:
    void setData(int v1,int v2){
    a=v1;
    b=v2;
    }
    void setdatasum(complex o1,complex o2){
        a=o1.a+o2.a;//mains part
        b=o1.b+o2.b;//mains part
    }
    void printno(){
        cout<<"your complex number is:"<<a<<"+i"<<b<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1.setData(4,6);
    c1.printno();
    

    c2.setData(4,9);
    
    c2.printno();

    c3.setdatasum(c1,c2);
    
    c3.printno();
    
}