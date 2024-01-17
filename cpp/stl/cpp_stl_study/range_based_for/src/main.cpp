#include <iostream>

int main(int argc, char const *argv[])
{
  int test_arr[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // using auto
  for(auto item: test_arr){
    std::cout<< item <<std::endl;
  }

  // not using auto
  for (int item: test_arr)
  {
    std::cout<< item <<std::endl;
  }
  
  return 0;
}
