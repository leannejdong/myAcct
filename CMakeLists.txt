cmake_minimum_required(VERSION 3.17)
project(myAcct)

set(CMAKE_CXX_STANDARD 20)

add_executable(myAcct main.cpp Account.cpp Account.h Transaction.cpp Transaction.h)