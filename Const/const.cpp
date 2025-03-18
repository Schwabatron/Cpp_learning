#include <iostream>

int main(){
	//the const keyword specifies that a variables value is constant
	//this tells the compiler to prevent anything from mofifying it 
	//you can think of this as a read only mode for a variable 
	const double pi = 3.14;
	int radius = 10; 
	double circumference = 2 * pi * radius;

	std::cout << "the circumference of the circle with radius: " << radius << " is " << circumference << '\n';




	return 0;

}
