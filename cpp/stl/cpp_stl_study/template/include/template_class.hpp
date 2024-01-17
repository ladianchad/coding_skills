#ifndef TEMPLATE_CLASS_HPP_
#define TEMPLATE_CLASS_HPP_

namespace template_study
{

template <class InnerClass>
class TemplateClass
{
public:
  using InnerClassSubType = typename InnerClass::SubType;

  explicit TemplateClass(InnerClass inner){
    inner_ = inner;
  }

  void printSubClass()
  {
    inner_.getSubClass().print();
  }

  InnerClassSubType getInnerSubClass()
  {
    return inner_.getSubClass();
  }

protected:
  InnerClass inner_;
};

  
}  // namespace template

#endif
