#include <base_product_builder.hpp>
#include <single_type_product_builder.h>
#include <iostream>

int main(int argc, char *argv[])
{
  builder::BaseProductBuilder *product_builder;
  builder::Product *product;
  product_builder = new builder::SingleTypeProductBuilder();

  product_builder->buildProduct(1);
  product_builder->buildItems(10);

  product = product_builder->getProduct();

  builder::ItemArray product_items = product->getItems();

  for (builder::Item *item : product_items)
  {
    std::cout << "item\nwidth : " << item->getWidth() << "\nheight : " << item->getHeight() << "\nlength : " << item->getLength() << std::endl;
  }

  return 0;
}