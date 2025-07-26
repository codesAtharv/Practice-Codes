// Task 1: Rectangle Class
// Create a class Rectangle with:
// Private: length, breadth
// Public:
// Constructor to initialize values
// area() → returns area
// perimeter() → returns perimeter
// display() → prints all
#include<iostream>
using namespace std;
class rectangle{
    private:
    int l , b;
    public:
    rectangle(int x,int y){
        l=x;
        b=y;
    }
    void show(){
        cout<<"Your rectanngle length is: "<<l<<"and breadth is :"<<b<<endl;
    }
    void perimeter(){
        cout<<"The PERIMETER of this rectangle is:"<<2*(l+b)<<endl;
    }
    // int perimeterr(){
    //     int result1 =2*(l+b);
    //     cout<<"perimeter is:"<< result1 <<endl;  ---------another way of doing above task 
    //     return result1;
    //}
    void area(){
        cout<<"The AREA of this rectangle is:"<<l*b<<endl;
    }
    // int areaa(){
    //     int result2 =l*b;
    //     cout<<"area is:"<< result2 <<endl;----------- another way of doing above tast
    //     return result2;
    // }
};



int main(){
    int l ,b;
    cout<<"Enter dimentions of rectangle in format length l and b:"<<endl;
    cin>>l>>b;
    rectangle r1(l,b);
    r1.show();
    r1.area();
    r1.perimeter();
    return 0;
}
//void and int 
// int give return and cout both value
//void give cout and dont give return