//static is a value or variable which can be used by each and every object
 
#include<iostream>
using namespace std;
class Employee{
private:
    int id;
    static int count;//default value 0  
//  static int count = 100; //  this will give error  
    
public:
    void setdata(void){
        cout<<"Enter id :"<<endl;
        cin>>id;
        count++;//this will upgrade value of count
    }
    void getdata(void){
        cout<<"The id of current Employee is  "<<id<<endl<<"Employee number is "<<count<<endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
    

};
int Employee :: count; //this will take count starting from 0 since its static
//  int Employee:: count=100; // this will starts from 100 

int main(){
    Employee harry, rohan,ram;
    //harry.id=1; // error because its private
    harry.setdata();
    harry.getdata();
    Employee ::getcount();
    rohan.setdata();
    rohan.getdata();
    
    Employee ::getcount();
    ram.setdata();
    ram.getdata();
    
    Employee ::getcount();
 
    return 0;
}