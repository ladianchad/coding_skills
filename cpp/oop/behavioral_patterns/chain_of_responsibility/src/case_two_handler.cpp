#include <case_two_handler.h>

CaseTwoHandler::CaseTwoHandler() : ErrorHandler("case_two_handler")
{
}

bool CaseTwoHandler::resolve(CustomError &error)
{
  if (error.getType() == 1)
  {
    std::cout << "this error handled by " << getName() << std::endl;
    // handle something
    return true;
  }
  return false;
}