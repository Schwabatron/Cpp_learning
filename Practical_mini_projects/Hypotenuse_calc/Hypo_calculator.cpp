#include <iostream>
#include <cmath>

int main(){

    double a = 0, b = 0, c = 0;

    std::cout << "welcome to the hypotenuse calculator, please enter a number for a: " << std::endl; //prompt user
    std::cin >> a; //putting value in a
    std::cout << "Please enter a number for b: " << std::endl; //prompt user
    std::cin >> b; //putting value in b
    std::cout << "the hypotenuse is: " << sqrt(pow(a, 2) + pow(b, 2)) << std::endl; //display to the user using the formula
    //C = sqrt(a^2 + b^2)




    return 0;
}