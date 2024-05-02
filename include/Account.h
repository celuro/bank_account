#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <iomanip>

class Account {
protected:
  int accountNumber;
  double balance;
public:
  void deposit(double amount);
  void withdraw(double amount);
  double getBalance() const;
  int getAccountNumber() const;
};

#endif
