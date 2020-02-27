#include "Account.hpp"

Account::Account() : number(""), balance(0) {
    //
}

Account::Account(string n, int a) : number(n), balance(a) {
    //
}

Account::Account(const Account& acc) {
    this->number = acc.number;
    this->balance = acc.balance;
}

string Account::getNumber() const {
    return this->number;
}

void Account::setNumber(string number) {
    this->number = number;
}

int Account::getBalance() const {
    return this->balance;
}

void Account::withdraw(int amount) {
    // Mengurangi saldo sebesar amount
    // TODO: melempar InvalidNumberException* bila amount <= 0
    // TODO: melempar InsufficientBalanceException* bila this->balance < amount
    this->balance -= amount;
}

void Account::add(int amount) {
    // Menambah saldo sebesar amount
    // TODO: melempar InvalidNumberException* bila amount <= 0
    this->balance += amount;
}
