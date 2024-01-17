#include <iostream>

#include "example_class.hpp"

namespace template_study
{

void
ExampleSubClass::print()
{
  std::cout<<"Hi i'm sub class"<<std::endl;
}

ExampleInnerClass::SubType
ExampleInnerClass::getSubClass()
{
  return sub_class_;
}
  
} // namespace template_study
