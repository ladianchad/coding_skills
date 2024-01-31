#include <iostream>
#include <magic_enum.hpp>
#include <glog/logging.h>


int main(int argc, char const * argv[])
{
  google::InitGoogleLogging(argv[0]);
  FLAGS_logtostdout = true;
  FLAGS_colorlogtostdout = true;
  enum Test {
    ONE =1 ,
    TWO = 2,
    TREE = 3
  };
  Test test = Test::TREE;
  LOG(INFO)<<"dpkg cpp example.";
  LOG(WARNING)<<"test enum name : "<< magic_enum::enum_name(test);
  return 0;
}
