#ifndef EXAMPLE_CLASS_HPP_
#define EXAMPLE_CLASS_HPP_

namespace template_study
{

class ExampleSubClass
{
public: 
  void print();
};

class ExampleInnerClass
{
public:
  using SubType = ExampleSubClass;

  SubType getSubClass();

SubType sub_class_;
};

} // namespace template





#endif