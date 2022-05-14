#include <iostream>
using namespace std;

void showOptions()
{
    cout << "Welcome to Happy life ATM" << endl;
    cout << "*********MENU********" << endl;
    cout << "1.Check Balance" << endl;
    cout << "2.Deposit" << endl;
    cout << "3.Withdrow" << endl;
    cout << "*********************" << endl;
}

int main()
{
    showOptions();
    int balance;
    balance = 500;
    int option;
    do
    {

        cout << "Option : ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Your balance is " << balance << "$" << endl;
            break;
        case 2:
            cout << "Deposit : ";
            int depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;

        case 3:
            cout << "Withdrow : ";
            int withdrowAmount;
            cin >> withdrowAmount;
            if (balance >= withdrowAmount)
                balance -= withdrowAmount;
            else
                cout << "Your blance is enough " << endl;
        }
    } while (option != 4);

    return 0;
}