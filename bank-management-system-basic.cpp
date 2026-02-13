// A simple C++ console project to practice OOP concepts by simulating basic banking operations such as account management and transactions

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
    int account_no;
    string name;
    float balance;

public:
    void createAccount()
    {
        cout << "Enter account no ";
        cin >> account_no;
        cout << "Enter account holder name ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter initial balance ";
        cin >> balance;
    }
    void checkBalance()
    {
        cout << "Total balance " << balance << endl;
    }
    void deposit()
    {
        float amount;
        cout << "Enter balance to deposit ";
        cin >> amount;
        balance += amount;
        cout << "Total balance after deposit " << balance << endl;
    }
    void withdraw()
    {
        float amount;
        cout << "Enter amount to withdraw ";
        cin >> amount;
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Balance after withdrawal " << balance << endl;
        }
    }

    void display()
    {
        cout << "\n\n----Displaying account details----\n";
        cout << "Account number " << account_no << endl;
        cout << "Name " << name << endl;
        cout << "Balance " << balance << endl;
    }
};
int main()
{
    BankAccount ba;
    int ch, op;
    do
    {
        cout << "1 for creating account " << endl;
        cout << "2 for deposit " << endl;
        cout << "3 for withdraw " << endl;
        cout << "4 for check balance " << endl;
        cout << "5 for displaying details " << endl;
        cout << "6 for exit " << endl;

        cout << "Enter your choice ";
        cin >> ch;

        if (ch == 6)
        {
            cout << "Exit!!";
            break;
        }
        switch (ch)
        {
        case 1:
            ba.createAccount();
            break;
        case 2:
            ba.deposit();
            break;
        case 3:
            ba.withdraw();
            break;
        case 4:
            ba.checkBalance();
            break;
        case 5:
            ba.display();
            break;
        default:
            cout << "Wrong choice!!" << endl;
        }
        cout << "Do you want to continue; press 1/0" << endl;
        cin >> op;
    } while (op == 1);
    return 0;
}