#include <vector>
#include <string>
#include "Transaction.h"

#ifndef MYACCT_ACCOUNT_H
#define MYACCT_ACCOUNT_H


class Account {
private:
    int balance;
    std::vector<Transaction> log;
    double limit;
public:
    Account();
    std::vector<std::string> Report();
    bool Deposit(double amount);
    bool Withdraw(double amount);
    double GetBalance() { return balance; }
};


#endif //MYACCT_ACCOUNT_H
