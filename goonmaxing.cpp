#include <iostream>
#include "ExtraGoonFiles.h"

int num1;
int num2;

int main(){
    std::cout << "Whats the fist number you want to add?" << "\n";
    std::cin >> num1;
    std::cout << "Whats the second number you want to add?" << "\n";
    std::cin >> num2;
    int num = add(num1, num2);
    std::cout << "\n" << num1 << " + " << num2 << " = " << num;
    return 0;
}