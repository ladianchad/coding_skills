#ifndef DOLLAR_H_
#define DOLLAR_H_
class Dollar
{
public:
  virtual float getDollar();
  virtual void addMoney(float money);

protected:
  float money_;
};
#endif