#include<iostream>
using namespace std;
class student{
    public:
        int roll_number;
        string name;
        string class_and_section;
        
};
class peformance: public student{
    public:
        float Science_marks;
        float English_marks;
        float Maths_marks;
        float SocialScience_marks;
        float Hindi_marks;

        float total();
        float average();
        void SetData();
        void result();


};
float peformance :: total(){
    float total=Science_marks+English_marks+Maths_marks+SocialScience_marks+Hindi_marks;
    return total;
}
float peformance :: average(){
    
    return total()/5;
}
void peformance :: SetData(){
    cout<<"Enter roll number:";
    cin>>roll_number;

    cin.ignore();
    cout<<"Enter Name :";
    getline(cin,name);

    cout<<"Enter class and section:";
    getline(cin,class_and_section);

    cout<<"Enter marks of Science:";
    cin>>Science_marks;
    cout<<"Enter marks of Maths:";
    cin>>Maths_marks;
    cout<<"Enter marks of English:";
    cin>>English_marks;
    cout<<"Enter marks of Hindi:";
    cin>>Hindi_marks;
    cout<<"Enter marks of Social Science:";
    cin>>SocialScience_marks;

}
void peformance::result(){
    float totalmarks=total();
    float avg=average();
    cout<<"--------------SCORE CARD-------------"<<endl;
    cout<<"Name of Student:         "<<name<<endl;
    cout<<"Class of Student         "<<class_and_section<<endl;
    cout<<"Roll Number of Student   "<<roll_number<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"-------SUBJECT WISE PEFORMANCE-------"<<endl;
    cout<<"Subject          MARKS"<<endl;
    cout<<"Science          "<<Science_marks<<endl;    
    cout<<"SocialScience    "<<SocialScience_marks<<endl;
    cout<<"Maths            "<<Maths_marks<<endl;
    cout<<"English          "<<English_marks<<endl;
    cout<<"Hindi            "<<Hindi_marks<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Student got "<<totalmarks<<" Out of 500"<<endl;
    cout<<"The Average of his marks is :"<<avg<<endl;
}



int main(){
    peformance atharv;
    atharv.SetData();
    atharv.result();

    



    return 0;
}