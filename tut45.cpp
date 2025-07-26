#include<iostream>
using namespace std;

class test{
    int a ,b;
    public:
    test(int i,int j):a(i),b(j){
    //test(int i,int j):a(i),b(j+a){   //-----This will work 
    //test(int i,int j):a(i),b(j+i){    //-----This will work
    //test(int i,int j):b(j),a(i){      //-----This will not work give garbage value **************
                                            //because a is created before b in line 5



        cout<<"constructure exicuted"<<endl;
        cout<<a<<endl<<b<<endl;
    }
};


int main(){
    test t(4,8);




    return 0;
}