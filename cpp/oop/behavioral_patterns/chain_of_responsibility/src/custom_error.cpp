#include <custom_error.h>

CustomError::CustomError(int type, std::string description) : std::runtime_error(description)
{
  type_ = type;
}

int CustomError::getType()
{
  return type_;
}