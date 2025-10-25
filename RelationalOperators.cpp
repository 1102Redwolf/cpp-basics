#include <iostream>
using namespace std;
int main(){

    int num1 {10};
    int num2 {20};

    cout << "number1 : "<< num1 << endl;
    cout << "number2 : "<< num2 << endl;

    cout << endl;
    
    cout << boolalpha; // To print boolean values as true/false
    cout << "num1 == num2 : " << (num1 == num2) << endl;
    cout << "num1 < num2 : " << (num1 < num2) << endl;
    cout << "num1 > num2 : " << (num1 > num2) << endl;
    cout << "num1 <= num2 : " << (num1 <= num2) << endl;
    cout << "num1 >= num2 : " << (num1 >= num2) << endl;
    cout << "num1 != num2 : " << (num1 != num2) << endl;
}