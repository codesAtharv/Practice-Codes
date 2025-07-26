#include<iostream>
#include<string>
using namespace std;
class binary
{
private:
    string s;
public:
    void read(void);
    void check_binary(void);
    void change_binary(void);
    void display(void);
};
//read()
void binary::read(void){
    cout<<"Enter number:"<<endl;
    cin>>s;
}
//Check Binary()
void binary::check_binary(void)
{
    for (int i = 0 ; i < s.length(); i++)
    {
        if (s.at(i) !='0' && s.at(i) !='1')
            {
                cout<<"incorrect binary format"<<endl;
                exit(0);
            }
    }
}
//Change binary()
void binary::change_binary(void)
{  
    check_binary();
    for(int i=0; i<s.length();i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';

        }
        else
        {
            s.at(i)='0';
        }
    }
}
//displaybinary()
void binary::display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for(int i=0; i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
//Main
int main(){


    binary b;
    b.read();
    b.check_binary();
    b.change_binary();
    b.display();


    return 0;
}