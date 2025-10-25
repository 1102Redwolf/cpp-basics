#include <iostream>

int main(){
    int num1 = 15; // Decimal representation
    int num2 = 017; // Octal representation
    int num3 = 0xF; // Hexadecimal representation
    int num4 = 0b00001111; // Binary representation


    std::cout << "Decimal: " << num1 << std::endl;
    std::cout << "Octal: " << num2 << std::endl;
    std::cout << "Hexadecimal: " << num3 << std::endl;
    std::cout << "Binary: " << num4 << std::endl;
}