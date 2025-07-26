#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
    public:
    int n1,n2;
    int setno(){
        cout<<"Enter n1,n2"<<endl;
        cin>>n1>>n2;
    }
    int add(){
         return (n1+n2);
    }
    int sub(){
        return (n1-n2);
    }
    int div(){
        return (n1/n2);
    }
    int multiply(){
        return (n1*n2);
    }
        
};

class scientificcalculator : public simplecalculator{
    public:
    int square(int h){
        return h*h;

    }
    int cube(int h){
        return h*h*h;
    }
    double power(int base, int exp){
        return pow(base,exp);
    }
    double squareroot(int h){
        if (h<0){
            cout<<"Error :negative no"<<endl;
            return -1;
        }
        return sqrt(h);
    }

};  
int main(){
    int num;
    cout<<"Enter no for sc: "<<endl;
    cin>>num;
    scientificcalculator sc;
    sc.setno();
     cout << "Addition: " << sc.add() << endl;
    cout << "Subtraction: " << sc.sub() << endl;
    cout << "Multiplication: " << sc.multiply() << endl;
    cout << "Division: " << sc.div() << endl;
    cout << "Square: " << sc.square(num) << endl;
    cout << "Cube: " << sc.cube(num) << endl;
    cout << "Power (num^2): " << sc.power(num, 2) << endl;
    cout << "Square Root: " << sc.squareroot(num) << endl;


    return 0;
}