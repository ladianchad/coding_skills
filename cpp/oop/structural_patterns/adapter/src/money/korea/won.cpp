#include <money/korea/won.h>

float Won::getWon()
{
  return money_;
}

void Won::addMoney(float money)
{
  money_ += money;
}