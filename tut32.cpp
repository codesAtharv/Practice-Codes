//copy constructure 
// usless topic but do it
#include <iostream>
using namespace std;

class number{
    int a;
public:
    number(){//default constructure
        a=0;
    }
    number(int num){
        a=num;
    }
    //When no copy constructure is found the compiler supply its own copy constructure means if we 
    //comment out lines given below then also the 
    //34th 35th line will work.
    number(number &obj){
        cout<<"copy constructure is called!!"<<endl;
        a=obj.a;

    }
    void display(){
        cout<<"your number is : "<<a<<endl;
    }
};


int main(){
    number x,y,z(45),z2;
    
    x.display();
    y.display();
    z.display();
    //if wanted to all copy constructure give its format
    number z1(x);//This is format for using copy constructure
    z1.display();
    z2=x;//no copy constructure invoke
    number z4=z ;// here copy constructure is invoked


    
    return 0;

}