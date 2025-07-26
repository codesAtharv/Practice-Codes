//polymorphisim -> its propertie that objects from different class behave like same cause having same functions
#include<iostream>
using namespace std;

class base{
    public:
    int varbase=1;
    virtual void display(){
        cout<<"1 Displaying base class varbase"<<varbase<<endl;
    }
};
class derived:public base{
    public:
    int varderived=2; 
    void display(){
        
        cout<<"2 Displaying base class varbase"<<varbase<<endl;
        cout<<"2 Displaying derived class varderived"<<varderived<<endl;
    }
};
int main(){
base * baseclasspointer;
base objbase;
derived objderived;
baseclasspointer=&objderived;
baseclasspointer->display();
//Only base class display is printed but if we use virtual on line 8 that display of derived will work

    return 0;
}