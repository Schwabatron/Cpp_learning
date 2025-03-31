#include <iostream>

//used to get input from the user


using string_t = std::string;

int main() {
    std::string user_input; //declaring string to hold user input

    std::cout << "Enter a string: "; //prompting user
    std::cin >> user_input; //using cin and the >> operator to put the input from the user into the variable user_input

    std::cout << user_input << std::endl; //printing user input

    string_t user_age;

    std::cout << "enter your age: ";

    std::cin >> user_age;

    std::cout << "the users age is "<< user_age << std::endl;

    string_t user_full_name;

    std::cout << "enter your full name: ";



    //you can get a string with spaces using the getline method

    std::getline(std::cin >> std::ws, user_full_name); // the >> std::ws extracts all the whitespace from the buffer

    std::cout << user_full_name << std::endl;



    return 0;
}