#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "Account.h"
void showMenu()
{
    cout << "************MENU*************" << endl;
    cout << " 1. Check Balance " << endl;
    cout << " 2. Deposit " << endl;
    cout << " 3. Withdraw " << endl;
    cout << " 4. Exit " << endl;
    cout << "*****************************" << endl;
}
int main() {
    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;
    double amount;
    Account a1;
    do{
        showMenu();
        cout  << "Option: ";
        cin >> option;

        switch (option) {
            case 1: cout << " Check account balance ";
                cout << " Balance is: " << a1.GetBalance() << " $" << endl;
                for (auto s : a1.Report())
                {
                    cout << s << '\n';
                }
                break;
            case 2: cout << " Deposit amount ";
                cin >> amount;
                cout << "You have deposited " << a1.Deposit(amount) << " $" << endl;
                cout << "After depositing, your balance is " << a1.GetBalance() << " $" << endl;
                for (auto s : a1.Report())
                {
                    cout << s << '\n';
                }
                break;
            case 3: cout << " Withdraw amount ";
                //double  withdrawAmount;
                cin >> amount;
                cout << "You have withdrawn " << a1.Withdraw(amount);
                for (auto s : a1.Report())
                {
                    cout << s << '\n';
                }
                if (amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient fund" << endl;
                break;

        }
    } while (option!=4);


    return 0;
}
