#ifndef CREDIT_CARD_ACCOUNT_H
#define CREDIT_CARD_ACCOUNT_H

#include "Account.h"

class CreditCardAccount : public Account {
public:
  void calculateInterest();
};

#endif

