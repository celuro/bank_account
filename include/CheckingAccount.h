#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "Account.h"
#include <iostream>
#include <iomanip>

class CheckingAccount : public Account {
private:
public:
  void deductMonthlyFees();
};

#endif
