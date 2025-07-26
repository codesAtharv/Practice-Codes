/*Virtual public class
A->B
A->C
B->D
C->D now to avoid getting a function in D from B and C both we use virtual public class
It make sure that Only one time functions of A is transfered*/
#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void setrollno(int a){
        rollno =a;
    }
    void printno(void){
        cout<<"your roll no is : "<<rollno<<endl;
    }
};
class test : virtual public student{
    protected:
    float maths, physics;
    public:
    void setmarks(float m1, float m2){
        maths =m1;
        physics =m2;
    }
    void printmarks(void){
        cout<<"your result is here"<<endl
            <<"maths : "<<maths<<endl
            <<"physics :"<<physics<<endl;
    }
};
class sports: virtual public student{
    protected:
    float score;
    public:
    void setscore(int a){
        score =a;
    }
    void printscore(void){
        cout<< "your PT score is "<<score<<endl;
    }
};
class result: public test, public sports{
    private:
    int total;
    public:
        void display(void){
            total=physics+maths+score;
            printscore();
            printmarks();
            printno();
            cout<<"total marks is : "<<total<<endl;
        }    
};



int main(){
    result atharv;
    atharv.setrollno(14);
    atharv.setscore(45);
    atharv.setmarks(55,75);
    atharv.display();

    return 0;
}
