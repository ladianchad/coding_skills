#include <iostream>

#include "kevin.hpp"
#include "tony.hpp"

void move()
{
  std::cout<<"걸어가요~~"<<std::endl;
}

namespace kevin
{
void say()
{
  std::cout<<"Case1 : Kevin이 답장했습니다."<<std::endl;
  // kevin
  move();
  std::cout<<"Case2 : Kevin이 답장했습니다."<<std::endl;
  ::move();
}
}

namespace tony
{
void say()
{
  std::cout<<"Case1 : Tony가 답장했습니다."<<std::endl;
  // kevin
  move();
  std::cout<<"Case2 : Tony가 답장했습니다."<<std::endl;
  ::move();
}
}


int main(int argc, char const *argv[])
{
  tony::say();
  kevin::say();
  return 0;
}
