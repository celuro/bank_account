#include "SavingsAccount.h"

void SavingsAccount::addInterest()
{
  // Lets make the interest rate 2%
  interestRate = 0.02;
  balance *= interestRate;
}
