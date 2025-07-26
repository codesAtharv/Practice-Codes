// using array and pointers together
#include<iostream>
using namespace std;
int main(){
    int mathmarks[5];
        mathmarks[0]=133;
        mathmarks[1]=13;
        mathmarks[2]=163;
        mathmarks[3]=122;
        mathmarks[4]=100;
        cout<<"This is mathmarks"<<endl;
    int*p = mathmarks;
    cout<<"the value of mathmarks[0] is "<<*p<<endl;
    cout<<"the value of mathmarks[1] is "<<*(p+1)<<endl;
    cout<<"the value of mathmarks[2] is "<<*(p+2)<<endl;
    cout<<"the value of mathmarks[3] is "<<*(p+3)<<endl;
    cout<<"the value of mathmarks[4] is "<<*(p+4)<<endl;

}