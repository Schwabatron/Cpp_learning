#include <iostream>



namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}



int main() {
  //namespaces:
  /*
    provides a solution for preventing name conflicts in large projects
    each entity needs a unique name
    a namespace allowed for identically named entities as long as the
    namespaces are different
   */

    int x = 5;


    std::cout << x << std::endl; //if you dont explicitly state what x is being used
    //it will default to the local x

    //if i wanted to use the x in say namespace first you can use the scope resolution operator "::"
    std::cout << first::x << std::endl;

    std::cout << second::x << std::endl;



  return 0;
}
