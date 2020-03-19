#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

#include <iostream>
#include "BaseException.hpp"
using namespace std;

class InsufficientBalanceException : public BaseException {
private:
    int balance;
    int amount;
public:
    InsufficientBalanceException(int balance, int amount) {
        this->balance = balance;
        this->amount = amount;
    }
    void printMessage() {
        cout << "Membutuhkan " << amount << " namun hanya tersedia " << balance << endl;
    }
};

class Account {
private:
    string number;
    int balance;
public:
    Account();
    Account(string n, int a);
    Account(const Account& acc);

    string getNumber() const;
    int getBalance() const;

    void setNumber(string number);

    // Mengurangi saldo sebesar amount
    void withdraw(int amount);

    // Menambah saldo sebesar amount
    void add(int amount);
};

#endif