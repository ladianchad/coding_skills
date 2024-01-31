#include <iostream>
#include <magic_enum.hpp>
#include <glog/logging.h>
#include <cpp_redis/cpp_redis>

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
  cpp_redis::active_logger = std::unique_ptr<cpp_redis::logger>(new cpp_redis::logger);
  cpp_redis::active_logger->info("test", __FILE__, __LINE__);
  Test test = Test::TREE;
  LOG(INFO)<<"dpkg cpp example.";
  LOG(WARNING)<<"test enum name : "<< magic_enum::enum_name(test);
  return 0;
}
