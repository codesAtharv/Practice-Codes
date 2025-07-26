//Constructure overloading 
#include<iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex(int x, int y){
        a=x;
        b=y;

    }
    complex(int x){
        a=x;
        b=0;
    
    }
    complex(){
        a=0;
        b=0;
    
    }
    void printno(){
        cout<<"Your complex no is: "<<a<<"+i"<<b<<endl;
    }
};



int main(){
    complex c1(4,6);
    c1.printno();
    complex c2;
    c2.printno();
    complex c3(1);
    c3.printno();


    return 0;
}
//all three work this concept is overloading