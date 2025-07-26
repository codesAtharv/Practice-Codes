#include<iostream>
using namespace std;
class base1{
    int data1;
    public:
        base1(int i){
            data1=i;
            cout<<"base 1 constructure is called"<<endl;
        }
        void print1(void){
            cout<<"the value of data1 is : "<<data1<<endl;
        }
    };
    
class base2{
    int data2;
    public:
        base2(int i){
        data2=i;
            cout<<"base 2 constructure is called"<<endl;
        }
        void print2(void){
            cout<<"the value of data2 is : "<<data2<<endl;
        }
};
class derived : public base1, public base2{//***here is base 2 is ahaed of base 2 than order changes */
    int derived1, derived2;
    public:
        derived(int a,int b,int c ,int d):base1(a),base2(b){//here if base2 is ahed of base 2 than no change in output
            derived1=c;
            derived2=d;
            cout<<"derived class constructure called"<<endl;
        }
        void printder(void){
            cout<<"The value of derived 1 is:"<<derived1<<endl;
            cout<<"The value of derived 2 is:"<<derived2<<endl;

            
        }
};    


int main(){
    derived atharv(7,8,9,4);
    atharv.print1();
    atharv.print2();
    atharv.printder();
    

    return 0;
}