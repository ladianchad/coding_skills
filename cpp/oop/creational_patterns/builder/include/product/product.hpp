#ifndef BUILDER_PRODUCT_H_
#define BUILDER_PRODUCT_H_

#include <product/item.hpp>

namespace builder
{

  class Product
  {
  public:
    ~Product()
    {
      if (items_.size())
      {
        for (Item *item : items_)
        {
          delete item;
        }
      }
    }

    void addItem(Item *item)
    {
      items_.push_back(item);
    }

    void setType(int type)
    {
      type_ = type;
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
    int type_;
    ItemArray items_;
  };
} // namespace builder

#endif