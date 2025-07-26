#include<iostream>
using namespace std;
class complex{
int a,b;
    public:

    complex(int, int); //this is costructure // this accept value hence its is {{paramatrised constructure}}
    
    void printno(){
        cout<<"your complex no is:"<<a<<"+"<<b<<"i"<<endl;
    }


};

complex ::complex(int x,int y){
    a=x;
    b=y;
}

int main(){
complex a(4,5);//Implicit call of writting this code
complex b = complex(5,6);//Explicit call of writting this code
a.printno();
b.printno();


    return 0; 
}
                  //default constructure dont take any value     