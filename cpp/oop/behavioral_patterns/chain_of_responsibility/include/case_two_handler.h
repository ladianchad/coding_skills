#ifndef CASE_TWO_HANDLER_H
#define CASE_TWO_HANDLER_H
#include <error_handler.h>
class CaseTwoHandler : public ErrorHandler
{
public:
  CaseTwoHandler();

protected:
  virtual bool resolve(CustomError &error) override;
};

#endif