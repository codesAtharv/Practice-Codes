#include<iostream>
using namespace std;
//this will not work
void swap(int a, int b){    //consider a = 4 and b = 5  
    int temp = a;           // temp = 4 a = 4 b=5
    a=b;                    // temp = 4 a=5, b=5 
    b=temp;                 // temp = 4, a=5, b=4
}
// Using swap pointers
void swapPointer(int* a, int* b){
    int temp= *a;
    *a=*b;
    *b=temp;

}
//Using refrence
void swaprefrence(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
//here a and b value is swapped so we have created function to swap values
int main(){
    int x=4, y=5;
    cout<<"The value of x is:"<<x<<"the value of y is:"<<y<<endl;
    swap(x,y);//This will not work..............<<<<<<<<----------
    cout<<"The value of x is:"<<x<<"the value of y is:"<<y<<endl;




//It doesnt work because>>>>>................. missing address



    cout<<"The value of x is:"<<x<<"the value of y is:"<<y<<endl;
    swapPointer(&x,&y);//This will work using pointers..............<<<<-------------
    cout<<"The value of x is:"<<x<<"the value of y is:"<<y<<endl;
    
//Using refreance 
    cout<<"The value of x is:"<<x<<"the value of y is:"<<y<<endl;
    swaprefrence(x,y);//This will work using refrence..............<<<<-------------
    cout<<"The value of x is:"<<x<<"the value of y is:"<<y<<endl;
    
}