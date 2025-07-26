//Operators
#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=4;
    cout<<"Arithmatic Operators: \n";
    cout<<"The value of a+b is:"<<a+b<<endl;
    cout<<"The value of a-b is:"<<a-b<<endl;
    cout<<"The value of a*b is:"<<a*b<<endl;
    cout<<"The value of a/b is:"<<a/b<<endl;
    cout<<"This is comming because a/b is not integer and main is defined in integer so it consider it as 0 \n";
    cout<<"The value of a%b is:"<<a%b<<endl;
    cout<<"The value of a++ is:"<<a++<<endl;
    cout<<"The value of ++a is:"<<++a<<endl;
    cout<<"a++ will type value of a first and then add 1 in that value\n"<<endl;
    cout<<"++a will first add 1 in a then type the value of that addition this will replace the value of already exicting value of a"<<endl;
    //Assignment Operator
    //use for comparision
    cout<<"This Assignment Operator use for comparision";
    cout<<"The value of a==b:"<<(a==b)<<endl;
    cout<<"The value of a!=b:"<<(a!=b)<<endl;
    cout<<"The value of a<=b:"<<(a<=b)<<endl;
    cout<<"The value of a>=b:"<<(a>=b)<<endl;
    cout<<"The value of a<b:"<<(a<b)<<endl;
    cout<<"The value of a>b:"<<(a>b)<<endl;
    //Logical Operator
    //This 'and' and 'or' Operator here "&&" is use for 'and' and "||" is use for or operator    
    cout<<"Logical Operator\n";
    cout<<"The value of ((a==b) && (a<b)) is"<<((a==b) && (a<b))<<endl;
    cout<<"The value of ((a!=b) || (a<b)) is"<<((a!=b) || (a<b))<<endl;
     
    return 0;
}

