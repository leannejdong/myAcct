
#include "Account.h"
#include <iostream>
using std::vector;
using std::string;
using std::to_string;

Account::Account() : balance(0), limit(1000)
{
}

vector<string> Account::Report()
{
    vector<string> report;
    report.push_back("Balance is " + to_string(balance));
    report.push_back("Transactions: ");
    for (auto t : log)
    {
        report.push_back(t.Report());
    }
    report.push_back("____________________");
    return report;
}
bool Account::Deposit(double amount)
{
    if (amount >= 0)
    {
        balance += amount;
        log.push_back(Transaction(amount, "Deposit"));
        balance -= 1;
        log.push_back(Transaction(1, "Service Charge"));
        return true;
    }
    else
    {
        return false;
    }
}
bool Account::Withdraw(double amount)
{
    if (amount <= 0)
    {
        return false;
    }
    if ((balance + limit) >= amount)
    {
        balance -= amount;
        log.push_back(Transaction(amount, "Withdraw"));
        balance -= 1;
        log.push_back(Transaction(1, "Service Charge"));
        return true;
    }
    return false;
}
//double Account::GetBalance() { return balance; }
