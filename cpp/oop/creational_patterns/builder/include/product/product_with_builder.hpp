#ifndef BUILDER_PRODUCT_WIDTH_BUILDER_H_
#define BUILDER_PRODUCT_WIDTH_BUILDER_H_
#include <product/item.hpp>
#include <vector>
namespace builder
{
  class ProductWithBuilder
  {
  public:
    ProductWithBuilder *setType(int type)
    {
      type_ = type;
      return this;
    }

    ProductWithBuilder *addItem(Item *item)
    {
      items_.push_back(item);
      return this;
    }

    ItemArray getItems()
    {
      return items_;
    }

    int getType()
    {
      return type_;
    }

  private:
    ItemArray items_;
    int type_;
  };
} // namespace builder

#endif