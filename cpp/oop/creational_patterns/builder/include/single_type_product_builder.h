#ifndef BUILDER_SINGLE_TYPE_PRODUCT_BUILDER_H_
#define BUILDER_SINGLE_TYPE_PRODUCT_BUILDER_H_
#include <base_product_builder.hpp>

namespace builder
{
  class SingleTypeProductBuilder : public BaseProductBuilder
  {
  public:
    virtual void buildProduct(int type) override;
    virtual void buildItems(int num) override;
  };
} // namespace builder

#endif