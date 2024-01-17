#include "template_class.hpp"
#include "example_class.hpp"

int main(int argc, char const *argv[])
{
  template_study::ExampleInnerClass inner;
  template_study::TemplateClass<template_study::ExampleInnerClass> template_class(inner);

  template_class.printSubClass();
  auto sub = template_class.getInnerSubClass();
  sub.print();

  return 0;
}
