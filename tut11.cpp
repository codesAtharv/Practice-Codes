//Array
#include<iostream>
using namespace std;
int main(){
    int marks[]={44,12,44,12,23};   
    //indexing starting from 0,1,2,3----
    cout<<marks[0]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    // another way of creating array or list
    int mathmarks[5];
    mathmarks[0]=133;
    mathmarks[1]=13;
    mathmarks[2]=163;
    mathmarks[3]=122;
    mathmarks[4]=100;
    mathmarks[5]=14;
    cout<<"This is mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;
    cout<<mathmarks[5]<<endl;
    //printing using loop
    cout<<"This is Table of 4"<<endl;
    int table[10]={4,8,12,16,20,24,28,32,36,40};
    for (int i = 0; i < 10; i++)
    {
        cout<<table[i]<<endl;
    }
    //now using while
    cout<<"using while to create 3 table"<<endl;
    int table3[10]={3,6,9,12,15,18,21,24,27,30};
    int x=0;
    while (x<10){
        cout<<table3[x]<<endl;
        x++;
    }

    

}