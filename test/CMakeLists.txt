cmake_minimum_required(VERSION 3.12)

add_executable(account_test account_test.cpp /home/leanne/CLionProjects/myAcct/src/Account.cpp /home/leanne/CLionProjects/myAcct/src/Transaction.cpp)
add_test(NAME account COMMAND account_test)