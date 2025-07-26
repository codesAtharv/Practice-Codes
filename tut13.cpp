//structure Union and enums
#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char city;
    int salary;
};
union money{
    int yen;
    int rupee;
    int dollar;
};

int main(){
    struct employee Harry;
    Harry.eid = 100;
    Harry.city = 'Dehli';
    Harry.salary=120000;
    cout<<"The id number of harry is :"<<Harry.eid<<endl;
    cout<<"The city of harry is :"<<Harry.city<<endl;
    cout<<"The salary of harry is :"<<Harry.salary<<endl;
    union money m1;
    m1.rupee=1;
    m1.dollar= 83;
    cout<<m1.rupee<<endl;
    //In union we can use any one only which is written in last line
    //ENUM
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    

    
    return 0;


}