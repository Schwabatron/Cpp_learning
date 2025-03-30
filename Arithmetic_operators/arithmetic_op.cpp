#include <iostream>;

int main() {

    //arithmetic operators = "+ - * /"

    int students = 20;

    //ADD
    students = students + 1;
    //OR
    students += 1;
    //OR
    students++;

    //SUB
    students = students - 1;
    students --;
    students -= 1;


    //Mult
    students = students * 2;
    students *= 2;

    //DIV
    students = students / 2;
    students /= 2;


    //MOD
    int remainder = students % 3;

    std::cout << students << std::endl;
    std::cout << remainder << std::endl;

    return 0;
}

