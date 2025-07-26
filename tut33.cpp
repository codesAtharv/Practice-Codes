#include<iostream>
using namespace std;
int count=0;
//destructor is used to clear storage 
// when ever code is exit or return then automatically destructor is invoked
// Destructor never take an argument doesn't it return any value 
class number{
    public:
    number(){
        count++;
        cout<<"this is the time when constructure  is called for object no: "<<count<<endl;

    }
    ~number(){//This is command for destructor
        cout<<"This is time when destructor is called  of object no: "<<count<<endl;
        count--;
    }

};
 

int main(){
    cout<< "Entering main"<<endl;
    cout<<"Creating object n1"<<endl;
    number n1;
    {
        cout<<"enterting block"<<endl;
        cout<<"creating two more objects"<<endl;//Block is used when we need to crate and destroy something 
        number n2,n3;                           //we have to do both things
        cout <<"Exiting block"<<endl;

    }
    cout<<"back to main"<<endl;



    return 0;

}