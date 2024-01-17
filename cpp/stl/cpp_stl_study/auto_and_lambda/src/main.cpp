#include <iostream>

void print(int val)
{
  std::cout<< "val : "<<val<<std::endl;
}

int main(int argc, char const *argv[])
{
  int val = 10;
  auto val2 = val;

  // lambda function
  auto test_eq = [=]() {
    // val++ 수정 불가;
    print(val);
  };

  auto test_eq_spec = [val](){
    print(val);
  };

  auto test_eq_can_edit_defualt = [val]() mutable {
    val++;
    print(val);
  };

  auto test_eq_can_edit = [=, &val]() mutable {
    val++;
    print(val);
  };

  auto test_ref = [&](){
    val++;
    print(val);
  };

  auto test_ref_spec = [&val](){
    val++;
    print(val);
  };

  print(val);
  test_eq();
  test_eq_spec();
  
  std::cout<<"Try to edit"<<std::endl;
  test_eq_can_edit_defualt();
  print(val);

  test_eq_can_edit();
  print(val);
  
  test_ref();
  print(val);

  return 0;
}
