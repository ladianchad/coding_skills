#include <single_type_product_builder.h>

namespace builder
{
  void SingleTypeProductBuilder::buildProduct(int type)
  {
    if (current_product_)
    {
      delete current_product_;
    }
    current_product_ = new Product();
    current_product_->setType(type);
  }

  void SingleTypeProductBuilder::buildItems(int num)
  {
    if (current_product_)
    {
      for (int i = num; i >= 0; i--)
      {
        Item *item = new Item();
        item->setHeight(1.0f);
        item->setWidth(1.0f);
        item->setLength(1.0f);
        current_product_->addItem(item);
      }
    }
  }
} // namespace builder
