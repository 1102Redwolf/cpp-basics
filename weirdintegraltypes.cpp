#include <iostream>
using namespace std;

int main() {
    short int a = 5;
    short int b = 10;
    auto c = a + b; // auto change it to int type becoz integral types less than 4 bytes do not support arithmetic operations
    cout << "The sum is: " << c << endl;
    cout << "Size of a: " << sizeof(a) << endl;
    cout << "Size of b: " << sizeof(b) << endl;
    cout << "Size of c: " << sizeof(c) << endl;
    
}