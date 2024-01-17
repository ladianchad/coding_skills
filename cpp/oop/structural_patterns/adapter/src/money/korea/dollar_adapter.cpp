#include <money/korea/dollar_adapter.h>

DollarAdapter::DollarAdapter(Dollar *dollar)
{
  dollar_ = dollar;
}

float DollarAdapter::getWon()
{
  return dollar_->getDollar() * 1000;
}

void DollarAdapter::addMoney(float money)
{
  dollar_->addMoney(money / 1000);
}