#ifndef ERROR_H
#define ERROR_H
#include <stdexcept>

class CustomError : public std::runtime_error
{
public:
  CustomError(int type = 0, std::string description = "");
  int getType();

protected:
  int type_;
};

#endif