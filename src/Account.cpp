#include "Account.h"

using namespace std;

void Account::deposit(double amount)
{
  // Let's say deposit amount has a limit of $1500
  // We ensure they can only depsosit a valid amount
  if (amount <= 0) {
    std::cerr << "The amount you would like to deposit must be greater than 0.\n";
  }
  else if (amount > 1500.0) {
    std::cerr << "You can't go over your deposit limit of $1500.\n";
  }
  else {
    balance += amount;
    std::cout << "You have successfully withdrawed $" << setprecision(2) << amount << '\n';
    std::cout << "Balance: " << balance;
  }
}

void Account::withdraw(double amount)
{
  // A user can only withdraw if the amount is less than their balance
  // and their balance is greater than 0
  if (amount <= 0) {
    std::cerr << "The amount you would like to withdraw must be greater than 0.\n";
  }
  else if (balance <= 0) {
    std::cerr << "Your balance must be greater than $0.\n";
  }
  else if (amount > balance) {
    std::cerr << "You do not have enough funds for this transaction\n";
  }
  else {
    balance -= amount;
    std::cout << "You have successfully withdrawed $" << setprecision(2) << amount << '\n';
    std::cout << "Balance: " << balance;
  }
}

double Account::getBalance() const
{
  return balance;
}

int Account::getAccountNumber() const
{
  return accountNumber;
}
