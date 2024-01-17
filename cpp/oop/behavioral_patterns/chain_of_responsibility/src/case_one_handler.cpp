#include <case_one_handler.h>

CaseOneHandler::CaseOneHandler() : ErrorHandler("case_one_handler")
{
}

bool CaseOneHandler::resolve(CustomError &error)
{
  if (error.getType() == 0)
  {
    std::cout << "this error handled by " << getName() << std::endl;
    // handle something
    return true;
  }
  return false;
}