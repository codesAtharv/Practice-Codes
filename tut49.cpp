#include<iostream>
using namespace std;
class base{
    public:
    int varbase;
    void display(){
     cout<<"Displaying base class variable varbase"<<varbase<<endl;

    }
};
class derived : public base{
    public:
    int varderived;
    void display(){
    cout<<"Displaying base class variable varbase"<<varbase<<endl;
    cout<<"Displaying derived class variable varderived"<<varderived<<endl;
    }
        
    };
int main(){
//If Base class pointer is connected to derived class than
//Display will run of base class
base * baseclasptr;
base objbase;
derived objderived;
baseclasptr=&objderived;
baseclasptr->varbase=34;
baseclasptr->display();
//This will work 
//if 
//baseclasptr->varderived=123;//this will not work since now we cant access varderived
baseclasptr->varbase=3400;
baseclasptr->display();

//baseclassptr-> varderived=123; gives error

derived * deriverclassptr;
deriverclassptr=&objderived;
deriverclassptr->varbase=232;
//Check this carefully
///********************** */

deriverclassptr->varderived=2;
deriverclassptr->display();
    return 0;
}