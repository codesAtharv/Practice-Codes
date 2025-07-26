#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    // int a = 34; 
    // cout<<"The value of a was: "<<a<<endl;
    // a = 45; 
    // cout<<"The value of a is: "<<a<<endl;
    // //Constants in C++-----------------------
    // const int b = 3;
    // cout<<"The value of b was: "<<b<<endl;
    // /*b = 45;*/ // You will get an error because b is a constant
    // cout<<"The value of b is: its constant give error if changed "<<b<<endl;

    // Manipulators in C++--------------

    int a =3, b=78, c=1233;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
//It just change the format of getting answer(setw)
    cout<<"The value of a is: "<<setw(3)<<a<<endl;
    cout<<"The value of b is: "<<setw(3)<<b<<endl;
    cout<<"The value of c is: "<<setw(3)<<c<<endl;


    //Operator Precedence
//     int a =3, b=4;
//     int c = (a*5)+b;
//     int d = ((((a*5)+b)-45)+87);
// // Follow BODMAS and other rules given in c++reference site check by searching Operator precedence

//     cout<<c<<endl;
//     cout<<d<<endl;
    return 0;
}