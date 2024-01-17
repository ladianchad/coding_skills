#include <money/korea/won.h>
#include <money/korea/dollar_adapter.h>
#include <iostream>
int main(int argc, char const *argv[])
{
  Won *money;
  Dollar dollar;
  DollarAdapter adapter(&dollar);
  money = &adapter;
  money->addMoney(100000.0);
  std::cout << money->getWon() << std::endl;
  std::cout << dollar.getDollar() << std::endl;

  return 0;
}
