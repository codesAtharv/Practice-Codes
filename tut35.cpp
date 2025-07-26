#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    float salary;
    employee(){}//default constructure for no error
    employee(int branchid){//This is constructure
    id =branchid;
    salary = 340000;  
    }
    
};
class programmer : public employee{
    public:
    int languagecode;
    programmer(int branchid){
        id =branchid;
        languagecode=2;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skill(10);
    cout<<skill.languagecode<<endl;
    cout<<skill.id<<endl;
    skill.getdata();

    return 0;
}
//by default inheritance is private
// In private, public data of base class is private, In  derived class
// In public, public data of base class is public, In derivied class
//private member never inherited
