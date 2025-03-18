#include <iostream>


int main(){
	//variable declaration
	int x;

	//variable assignment
	x = 10;

	std::cout << x << '\n'; 
	
	//Some data types 

	//integer(whole number)
	int age = 21; 
	int year = 2025; 
	int days = 7;

	std::cout << days << '\n';
	
	//Double (number including the decimal)

	double price = 3.99;
	double gpa = 1.23;
	double temp = 89.9234;

	std::cout << price << temp << gpa << '\n';

	//char(single character)

	char grade = 'A';
	char initial = 'B';

	std::cout << grade << '\n';

	//Boolean (true or false)
	bool student = true;
	bool smiling = false; 
	
	//String(object that represents a sequence of text)
	
	std::string name = "jack";
	std::string day = "sunday";

	std::cout << name << '\n';
	std::cout << "hello " << name << " it is " << day << '\n';

	

	return 0;
}
