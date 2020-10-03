#include <string>
#ifndef MYACCT_TRANSACTION_H
#define MYACCT_TRANSACTION_H
class Transaction {
private:
    int amount;
    std::string type;
public:
    Transaction(int amt, std::string kind);
    std::string Report();
};


#endif //MYACCT_TRANSACTION_H
