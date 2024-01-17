#include <money/america/dollar.h>

float Dollar::getDollar()
{
  return money_;
}

void Dollar::addMoney(float money)
{
  money_ += money;
}