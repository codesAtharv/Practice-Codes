//Constructure default value setting
#include<iostream>
using namespace std;
class test
{
private:
    int a,b;
public:
    test(int x, int y=8){//here y=8 is default value if we dont take any value than it will take 8 as default
        a=x;
        b=y;

    }
    void printno(){
        cout<<"Your no is: "<<a<<" and "<<b<<endl;
    }
};



int main(){
    test c1(4,6);
    c1.printno();  

    test c2(1);
    c2.printno();


    return 0;
}
