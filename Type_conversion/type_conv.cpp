#include <iostream>

int main() {


  //type conversion = conversion of a value from one data type to another
  //implicit conversion = automatic
  //explicit = precede value with new data type

  int x = 3.14;


  double y = 3.14;

  std::cout << x << std::endl; // if you display x it will print '3' because x with implicitly turned into an int
  std::cout << y << std::endl;

  std::cout << (int) y << std::endl; //explicit cast to int making this print '3'


  char c = 100;


  std::cout << c << std::endl; //implicit cast to char (ASCII)



  //test example


  int correct = 8;

  int questions = 10;

  double score = correct/(double) questions * 100;

  std::cout << score << "%" <<  std::endl;

  return 0;
}

