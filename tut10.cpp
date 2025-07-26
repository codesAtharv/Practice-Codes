//POINTERS
// its is datatype
// its used to find out address of variable
#include<iostream>
using namespace std;
//& address operator , * dreference operator
int main(){
    int a=3;
    int*b=&a;
    cout<<a<<endl;
    cout<<b<<endl;//b=&a
    cout<<&a<<endl;
    cout<<*b<<endl;// *b =a
    cout<<&b<<endl;
    return 0;
}
