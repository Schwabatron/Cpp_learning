#include <iostream>
#include <cmath>

int main(){
  double x = 3;
  double y = 5;
  double z;

  //Max function
  z = std::max(x, y);
  std::cout << z << std::endl;
  z = std::min(x, y);
  std::cout << z << std::endl;

  //pow
  z = std::pow(2, 4);
  std::cout << z << std::endl;

  //sqrt
  z = std::sqrt(9);
  std::cout << z << std::endl;

  //abs
  z = std::abs(-5);
  std::cout << z << std::endl;

  //round
  z = std::round(5.14);
  std::cout << z << std::endl;

  //ceiling function (round up)
  z = std::ceil(5.14);
  std::cout << z << std::endl;

  //floor (round down)
  z = std::floor(5.14);
  std::cout << z << std::endl;

  return 0;
}