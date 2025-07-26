#include<iostream>
using namespace std;
class student{
    int rollno;
    string name;
    int marks[3];
public:
    void getdata();
    int totalmarks();
    friend void compare(student,student); //friend function

};
void student :: getdata(){
    cout<<"Enter roll of student:"<<endl;
    cin>>rollno;
    cout << "Enter Name of student:" << endl;
    cin.ignore();     
    cout<<"Enter name"<<endl;                                   
    getline(cin, name);
    for(int i=0;i<3;i++){
        cout<<"Enter marks in PCM format"<<i+1<<endl;
        cin>>marks[i];
    }
}
int student:: totalmarks(){
    return marks[0]+marks[1]+marks[2];
}
void compare(student s1,student s2){
    int total1=s1.totalmarks();
    int total2=s2.totalmarks();
    if (total1>total2){
        cout<<s1.name<<" has higher marks than "<<s2.name<<endl;// using student in this by creating friend
    }
    else if(total1<total2){
        cout<<s2.name<<" has higher marks than "<<s1.name<<endl;// using student in this by creating friend
    }
    else{
        cout<<"both "<<s1.name<<" and "<<s2.name<<" have same marks."<<endl;// using student in this by creating friend
    }
    }
    

int main(){
    student s1,s2;
    s1.getdata();
    s2.getdata();
    s1.totalmarks();
    s2.totalmarks();
    compare(s1,s2);
    

    return 0;

}