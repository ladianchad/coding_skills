#include <product/product_with_builder.hpp>
#include <iostream>

int main(int argc, char *argv[])
{
  builder::ProductWithBuilder *product;
  product = (new builder::ProductWithBuilder())
                ->setType(1)
                ->addItem(new builder::Item())
                ->addItem(new builder::Item());

  std::vector<builder::Item *> product_items = product->getItems();

  for (builder::Item *item : product_items)
  {
    std::cout << "item\nwidth : " << item->getWidth() << "\nheight : " << item->getHeight() << "\nlength : " << item->getLength() << std::endl;
  }

  return 0;
}