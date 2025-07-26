#include <iostream>
using namespace std;
class ATM
{
private:
    float Balance;
    int Accountno;
    int pin;

public:
    ATM(int accNo, int p, int Bal)
    {
        Balance = Bal;
        Accountno = accNo;
        pin = p;
    }

    int login(int enteredaccNo, int enteredpin)
    {
        return (enteredaccNo == Accountno && enteredpin == pin);
    }
    void ShowBalance(void)
    {
        cout << "your current Balance is: $" << Balance << endl;
    }
    void changepin(int oldPin, int newpin)
    {
        if (oldPin == pin)
        {
            pin = newpin;
            cout << "Pin changed Successfully" << endl;
        }
        else
        {
            cout << "Incorrect old pin" << endl;
        }
    }
    void deposit(float amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid amount" << endl;
        }
        else
        {
            Balance += amount;
            cout << "$" << amount << "deposited in you bank account" << endl;
        }
    }
    void withdraw(float amount)
    {
        if (amount <= 0 || amount > Balance)
        {
            cout << "Invalid of insufficiently Balance" << endl;
        }
        else
        {
            Balance -= amount;
            cout << "$" << amount << "withdrawn sucessfully" << endl;
        }
    }
};

int main()
{
    ATM user(11111, 7412, 150000.53);
    int accInput, pinInput;
    cout << "Welcome to Bank ATM" << endl;
    cout << "Enter you Account number:";
    cin >> accInput;
    cout << "Enter pin of your account: ";
    cin >> pinInput;

    if (user.login(accInput, pinInput))
    {
        int input;
        do
        {
            cout << "--------ATM Menu-------" << endl;
            cout << "Enter 1 to check Balance" << endl;
            cout << "Enter 2 to Deposit" << endl;
            cout << "Enter 3 to withdraw" << endl;
            cout << "Enter 4 to change pin" << endl;
            cout << "Enter 5 for EXIT" << endl;
            cout << "Enter you choice:";
            cin >> input;

            switch (input)
            {

            case 1:
            {
                user.ShowBalance();
                break;
            }
            case 2:
            {
                float amount;
                cout << "Enter amount you want to deposit:";
                cin >> amount;
                user.deposit(amount);
                break;
            }
            case 3:
            {
                float amount;
                cout << "Enter amount you want to withdraw:";
                cin >> amount;
                user.withdraw(amount);
                break;
            }
            case 4:
            {
                int oldpin, newpin;
                cout << "Enter old PIN: ";
                cin >> oldpin;
                cout << "Enter new PIN: ";
                cin >> newpin;
                user.changepin(oldpin, newpin);
                break;
            }
            case 5:
            {
                cout << "Thanks for Using ATM" << endl;
                break;
            }

            default:
                cout << "Invalid Choice:" << endl;
            }
        } while (input != 5);
    }
    else
    {
        cout << "Invalid Pin number" << endl;
    }

    return 0;
}