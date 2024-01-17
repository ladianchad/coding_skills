#ifndef CASE_ONE_HANDLER_H
#define CASE_ONE_HANDLER_H
#include <error_handler.h>
class CaseOneHandler : public ErrorHandler
{
public:
  CaseOneHandler();

protected:
  virtual bool resolve(CustomError &error) override;
};

#endif