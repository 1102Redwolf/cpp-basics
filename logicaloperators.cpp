#include <iostream>
using namespace std;
int main (){
    bool a = true;
    bool b = false;
    bool c = true;

    cout << boolalpha; // Enable bool output as true/false 
    // Logical AND
    cout << "Logical AND (a && b): " << (a && b) << endl; // Outputs 0 (false)
    cout << "Logical AND (a && c): " << (a && c) << endl; // Outputs 1 (true)
    cout << "Logical AND (b && c): " << (b && c) << endl; // Outputs 0 (false)
    cout << "Logical AND (a && a): " << (a && a) << endl; // Outputs 1 (true)
    cout << "Logical AND (b && c && a): " << (b && c && a) << endl; // Outputs 0 (false) 

    // Logical OR
    cout << "Logical OR (a || b): " << (a || b) << endl; // Outputs 1 (true)
    cout << "Logical OR (b || c): " << (b || c) << endl; // Outputs 1 (true)
    cout << "Logical OR (c || a): " << (c || a) << endl; // Outputs 1 (true)
    cout << "Logical OR (b || c || a): " << (b || c || a) << endl; // Outputs 1 (true)


    // Logical NOT
    cout << "Logical NOT (!a): " << (!a) << endl; // Outputs 0 (false)
    cout << "Logical NOT (!b): " << (!b) << endl; // Outputs 1 (true)

//Combinations of all these operators
	std::cout << std::endl;
	std::cout << "Combining logical operators" << std::endl;
	// !(a &&b) || c
	std::cout << "!(a &&b) || c : " << (!(a &&b) || c) << std::endl; // true
	std::cout << "!(b && c) || a : " << (!(b && c) || a) << std::endl; // true
	std::cout << "!(c && a) || b : " << (!(c && a) || b) << std::endl; // true
	std::cout << "!(b && c && a) : " << (!(b && c && a)) << std::endl; // true

    return 0;
}