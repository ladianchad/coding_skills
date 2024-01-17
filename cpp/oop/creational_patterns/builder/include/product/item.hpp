#ifndef BUILDER_ITEM_H_
#define BUILDER_ITEM_H_
#include <vector>

namespace builder
{
  class Item
  {
  public:
    void setWidth(float size)
    {
      width_ = size;
    }

    void setHeight(float size)
    {
      height_ = size;
    }

    void setLength(float size)
    {
      length_ = size;
    }

    float getWidth()
    {
      return width_;
    }

    float getHeight()
    {
      return height_;
    }

    float getLength()
    {
      return length_;
    }

  private:
    double width_;
    double height_;
    double length_;
  };

  using ItemArray = std::vector<Item *>;
}
#endif