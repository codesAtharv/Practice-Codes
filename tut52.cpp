#include<iostream>
//modlus for files are fstream(module), ofstream(for output functin), ifstream(for input function)
#include<fstream>
using namespace std;
int main(){
    //writing in empty file
    // string st="This program is for reading and writing inside files";
    // ofstream test1("sample52.txt");
    // test1<<st;


    //reading

    string r;
    ifstream test2("sample52.txt");
    getline(test2,r);
    cout<<r;
    return 0;
}





// int main(){
//     //opening
//     string w ="to write";
//     ofstream test1("name of file");
//     test1<<w;

//     //reading
//     string r;
//     ifstream test2("name of file");
//     test2>>r;
//     //for multiple words of line 
//     getline(test2,r);
//     cout<<r;
//     return 0;
// }