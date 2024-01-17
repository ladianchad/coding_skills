#ifndef SHAPE_FACTORY_HPP
#define SHAPE_FACTORY_HPP

#include <mutex>
#include <map>

#include "circle.hpp"
#include "line.hpp"

class ShapeFactory
{
public:
  enum Type{
    CIRCLE,
    LINE
  };
  ShapeFactory();

  Shape* getShape(Type type);

  void createType(Type &type);

private:
  static std::mutex mutex_;
  static std::map<Type,Shape*> shapes_;
};

ShapeFactory::ShapeFactory(/* args */)
{

}

Shape*
ShapeFactory::getShape(Type type)
{
  if(!shapes_[type]){
    createType(type); 
  }
  return shapes_[type];
}

void
ShapeFactory::createType(Type &type)
{
  std::lock_guard<std::mutex> unique_lock(mutex_);
  if(type == Type::CIRCLE){
    shapes_[type] = new Circle();
  } else if(type == Type::LINE){
    shapes_[type] = new Line();
  }
}

std::mutex ShapeFactory::mutex_;
std::map<ShapeFactory::Type,Shape*> ShapeFactory::shapes_;
#endif