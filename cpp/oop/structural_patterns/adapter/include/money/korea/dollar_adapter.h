#ifndef DOLLAR_ADAPTER_H_
#define DOLLAR_ADAPTER_H_
#include <money/america/dollar.h>
#include <money/korea/won.h>

class DollarAdapter : public Won
{
public:
  DollarAdapter(Dollar *dollar);
  float getWon() override;
  void addMoney(float money) override;

private:
  Dollar *dollar_;
};
#endif