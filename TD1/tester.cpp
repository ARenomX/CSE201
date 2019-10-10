//tester



#include <iostream>

int main(){
  int val = 1;
  int *p;

  p = &val;
  *p = (*p) + 1;

  std::cout << "val contains: " << val << std::endl;
  std::cout << "Value of *p: " << *p << std::endl;

  std::cout << "val is at address: " << (&val) << std::endl;
  std::cout << "p contains: " << p << std::endl;
}