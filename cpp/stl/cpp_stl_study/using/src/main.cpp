#include <iostream>


// using for namespcae
void test1() {
  using namespace std;
  cout<< "HI" <<endl;
}

// using for function
void test2() {
  using std::cout;
  cout<< "HI" <<std::endl;
}

// using for typedef
void test3() {
  using MyInt = unsigned int;
  MyInt val;
  val = 10;
  std::cout<< val << std::endl; 
}

int main(int argc, char const *argv[])
{
  test1();
  test2();
  test3();
  return 0;
}
