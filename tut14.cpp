#include<iostream>
using namespace std;
//Here we are creating a function named sum, To Addition/sum of numbers
int sum(int a , int b){
    int c=a+b;
    return c;

}
void g(void){
    cout<<"Enter number"<<endl;//to use g() when we need to writecout all 
}
int main(){
    int a , b;
    g();
    //cout<<"enter a"<<endl;                    // here we used created function g() multiple time using enter line
    cin>>a;
    g();
    //cout<<"enter b"<<endl;
    cin>>b;
    cout<<"the Sum of a and b is:"<<sum(a,b);
    return 0;

}
//void function to use multiple times
