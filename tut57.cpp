#include<iostream>
using namespace std;
template <class T>
class Atharv{
    public:
        T data;
        Atharv(T a){
            data = a;
        }
        void display();

};
template <class T>
void Atharv<T>::display(){
    cout<<data;
}
void function(int a){
    cout<<"1 function(): "<<a<<endl;

}
template <class T>
void function(T a){
    cout<<"2 function() with T : "<<a<<endl;
    
}
int main(){
function(4);
    return 0;

}
//This shows that setted template is priotised
//And template can be used on function as well