#include<iostream>
using namespace std;
class complex{
int a,b;
    public:

    complex(void); //this is costructure //This is default constructure
    
    void printno(){
        cout<<"your complex no is:"<<a<<"+"<<b<<"i"<<endl;
    }


};

complex ::complex(void){
    a=14;
    b=1;
}

int main(){
complex c1,c2;
c1.printno();
c2.printno();


    return 0;
}
                        /*----------------CONSTRUCTURE----------------
                        1. It just like functions but it automatically invoke
                        we dont need to invoke it
                        2. it is automatically invoked whenever object is created
                        3. It should be decleared under Public of class
                        4. It dont have return value we cant use return syntaqx
                        5. we cannt refer address with this
                        6. it can have default arguments  */
