#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //very long and complicated
//data type is now under the name pairlist_t with the _t being an indication that
//it is a typedef

//typedef std::string text_t;

//typedef int number_t;

//using keyword

using text_t = std::string; //more suitable with templates

int main() {
  //typedef:
  /*
    reserved keyword used to create an additional name for another data type
    new identify for an existing type
    helps with readability and less typos
    this has mostly been replaced with the using keyword
   */





    text_t text = "Hello World!";

    std::cout << text << std::endl;




  return 0;
}

