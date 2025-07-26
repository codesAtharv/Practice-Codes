#include<iostream>
using namespace std;
class Employee{
private:
    int id;
    int salary;
public:
    void setid(void){
        salary=120000;
        cout<<"enter id of employee:"<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"the id of emplyee is:"<<id<<endl;
    }
};



int main(){
    Employee array[4];
    for(int i=0;i<4;i++){
        array[i].setid();
        array[i].getdata();
        
    }





    return 0;
}