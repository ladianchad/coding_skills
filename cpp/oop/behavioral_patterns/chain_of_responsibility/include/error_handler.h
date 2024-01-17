#ifndef ERROR_HANDLER_H
#define ERROR_HANDLER_H
#include <custom_error.h>
#include <iostream>
#include <string>
class ErrorHandler
{
public:
  ErrorHandler(std::string name = "base_error_handler") : name_(name)
  {
    next_ = nullptr;
  }

  ErrorHandler *setNext(ErrorHandler *handler = nullptr)
  {
    next_ = handler;
    return handler;
  }

  std::string &getName()
  {
    return name_;
  }

  bool support(CustomError error)
  {
    if (resolve(error))
    {
      return true;
    }
    else if (next_ != nullptr)
    {
      std::cerr << "this error can't handle by " << getName() << std::endl;
      std::cerr << "try next handler ..." << std::endl;
      return next_->support(error);
    }
    std::cerr << "this error can't handle by " << getName() << std::endl;
    return false;
  };

protected:
  virtual bool resolve(CustomError &error)
  {
    // base handler do not anything
    return false;
  }
  ErrorHandler *next_;
  std::string name_;
};

#endif