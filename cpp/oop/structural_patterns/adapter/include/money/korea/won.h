#ifndef WON_H_
#define WON_H_
class Won
{
public:
  virtual float getWon();
  virtual void addMoney(float moeny);

protected:
  float money_;
};

#endif