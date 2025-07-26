//multiple templates program

#include<iostream>
using namespace std;

template <class t1,class t2>
class myclass{
    public:
        t1 data1;
        t2 data2;
        myclass(t1 a,t2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<data1<<endl<<data2;
        }
};

int main(){
    myclass<int,char> obj(7,'B');
    obj.display();

    return 0;
}

//this looks like the code given below


/*
#include<iostream>
using namespace std;

class myclass{
    public:
        int data1;
        char data2;
        myclass(int a,char b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<data1<<endl<<data2;
        }
};

int main(){
    myclass obj(7,'B');
    obj.display();

    return 0;
}
*/