#include<iostream>
using namespace std;


class student{
    protected:
    int rollno;
    public:
    void setrollno(int r){
        rollno=r;
    }
    void getrollno(){
        cout<<"your rollno is: "<<rollno<<endl;
    }

};
class Exam: public student{
    protected:
    int maths;
    int physics;
    public:
    void setmarks(int m1,int m2){
        maths=m1;
        physics =m2;
    }
    void getmarks(void){
        cout<<"your marks in physics is : "<<physics<<endl;
        cout<<"your marks in maths is : "<<maths<<endl;

    }
};
class result: public Exam{
    int percent;
    public:
    void display_results(){
        getrollno();
        getmarks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main(){
    result atharv;
    atharv.setrollno(9);
    atharv.setmarks(90,80);
    atharv.display_results();


    return 0;

}