// Task 2: Student Marks Report
// Class Student
// Roll number, name, marks[] in 3 subjects
// Constructor or input function
// average() and displayResult()
#include<iostream>
#include<string>
using namespace std;
class student{
    private:
        int rollno;
        int marks_of_Physics;
        int marks_of_Chemistry;
        int marks_of_Maths;
        //int marks[3]   ----------UPDATED USING ARRAY
        string name;
    public:
        void getData(void);
        float avg(void);
        void result(void);
};
void student :: getData(void){
    cout<<"Enter roll of student:"<<endl;
    cin>>rollno;
    cout<<"Enter Name of student:"<<endl;
    cin>>name;
    // cout << "Enter Name of student:" << endl;
    // cin.ignore();                                        //-------------DO this if want to write in 2 words
    // getline(cin, name);                                   //     -------ex-> Atharv Bajaj here are two words

    cout<<"Enter marks of Physics:"<<endl;
    cin>>marks_of_Physics;
    cout<<"Enter marks of Chemistry:"<<endl;
    cin>>marks_of_Chemistry;
    cout<<"Enter marks of Maths:"<<endl;
    cin>>marks_of_Maths;
    // cout << "Enter marks of Physics: ";
    // cin >> marks[0];
    // cout << "Enter marks of Chemistry: ";    --------UPDATED USING ARRAY
    // cin >> marks[1];
    // cout << "Enter marks of Maths: ";
    // cin >> marks[2];


}
float student :: avg(void){
    float average=(marks_of_Chemistry+marks_of_Maths+marks_of_Physics)/3;
    cout<<"average of marks is:"<<average<<endl;
    return average;
    // float student::avg() {
    // float total = 0;
    // for(int i = 0; i < 3; i++) {
    //     total += marks[i];
    // }                                                  ------------UPDATE USING ARRAY
    // float average = total / 3.0;
    // cout << "Average Marks: " << average << endl;
    // return average;
}
void student :: result(void){
    cout<<"Your roll no is:"<<rollno<<endl;
    cout<<"Your Name is :"<<name<<endl;
    cout << "Your marks in PCM format are:\n";
    cout << "Physics   : " << marks_of_Physics << endl;
    cout << "Chemistry : " << marks_of_Chemistry << endl;
    cout << "Maths     : " << marks_of_Maths << endl;
    // cout << "  Physics   : " << marks[0] << endl;
    // cout << "  Chemistry : " << marks[1] << endl;       --------UPDATED USING ARRAY
    // cout << "  Maths     : " << marks[2] << endl;


}
int main(){
    student atharv;
    atharv.getData();
    atharv.result();
    atharv.avg();
    



    return 0;
}