#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string name;
    ofstream write("sample53.txt");
    cout<<"Enter your name";
    cin>>name;
    write<<"My name is :"<<name;
    write.close();

    string detail;
    ifstream read("sample53.txt");
    getline(read,detail);
    cout<<detail;

    return 0;
}
