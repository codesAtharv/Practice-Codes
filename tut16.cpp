#include<iostream>
using namespace std;
int product(int a, int b){
    static int c=0;
    c = c + 1;
    return a*b+c;
}
    
int main(){
    int a,b;
    cout<<"Enter a and b :"<<endl;
    cin>>a>>b;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    // printing multiple times to see change is 
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    cout<<"the product and sum of abc respectively in format a*B+C is :"<<product(a,b)<<endl;
    
    return 0 ;
}