#include<iostream>
using namespace std;
class a{
    public:
    void say(){
        cout<<"hii"<<endl;
    }
    void say1(){
        cout<<"hii iii"<<endl;
    }
    void say2(){
        cout<<"hii hello"<<endl;
    }
};
class b{
    public:
    void say(){
        cout<<"hii"<<endl;
    }
    void say1(){
        cout<<"hii hello"<<endl;
    }
    void say2(){
        cout<<"hii hello"<<endl;
    }
};
class c : public a, public b {
    int ab;
    public:
    void say2(){
        cout<<"hii bye hello"<<endl;
        
    }

};
int main(){
    c alp;
    //alp.say(); //its is giving error because say is in both a and b it is confuse
    //alp.say1(); //its is giving error because """"""""""""""same above"""""""""
    //to make any of say 1 or say work we use 
    alp.say2();



    return 0;

}