//This pointer
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void setData(int a){
        this->a=a;//This is correct
       // a=a;//this will give garbage value
    }
    void print(){

        cout<<a;
        
    }
};

int main(){
    A b;
    b.setData(4);
    b.print();



    return 0;
}