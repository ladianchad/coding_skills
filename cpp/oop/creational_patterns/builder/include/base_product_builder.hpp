#ifndef BUILDER_BASE_PRODUCT_BUILDER_H_
#define BUILDER_BASE_PRODUCT_BUILDER_H_
#include <product/product.hpp>

namespace builder
{
  class BaseProductBuilder
  {
  public:
    BaseProductBuilder()
    {
      current_product_ = nullptr;
    }

    ~BaseProductBuilder()
    {
      if (current_product_)
      {
        delete current_product_;
      }
    }

    virtual void buildProduct(int type) = 0;
    virtual void buildItems(int num) = 0;

    Product *getProduct()
    {
      return current_product_;
    };

  protected:
    Product *current_product_;
  };
}

#endif