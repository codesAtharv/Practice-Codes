#include<iostream>
using namespace std;


int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
//fibonacchi
int fib(int h){
    if(h<2){
        return 1;
    }
    return fib(h-1)+fib(h-2); 
}
    
int main(){// This will remain int since it will round off the answer
    int a;
    cout<<"enter number"<<endl;
    cin>>a;
    cout<<"The factorial of number a is:"<<factorial(a)<<endl;


//fibonacci Sequence
// 1,1,2,3,5,8,13,21,34,55,89,144,233,-------
//index from 0,1,2,3,4---
// 1+1=2
// 1+2=3
// 2+3=5
// 3+5=8

// 8+5=13
// 13+8=21
//nth term = (n-1)th term + (n-2)th term
    int x ;
    cout<<"enter number"<<endl;
    cin>>x;
    cout<<"The fibonacci sequence of nth term is :"<<fib(x)<<endl;
    
    return 0;

}

