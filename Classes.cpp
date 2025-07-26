#include <iostream>
using namespace std;
class Employee
{
private:
    int cabin_NO, Increment, Salary;

public:
    int age, ID;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of cabin_NO is:" << cabin_NO << endl;
        cout << "The value of Increment is:" << Increment << endl;
        cout << "The value of Salary is:" << Salary << endl;
        cout << "The value of age is:" << age << endl;
        cout << "The value of ID is:" << ID << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{
    cabin_NO = a1;
    Increment = b1;
    Salary = c1;
}

int main()
{
    Employee Ram;
    Ram.setData(45, 15000, 150000);
    Ram.age = 26;
    Ram.ID = 101;

    // Ram.cabin_NO=123;//--------->This give error since a is private

    Ram.getData();

    return 0;
}