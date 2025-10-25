#include <iostream>
using namespace std; 
int main() {
    int d{45};
	int e{20};
	int f{11};
    int a{true};
    int b{false};
    int c{true};


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
    cout << "Logical NOT (!c): " << (!c) << endl; // Outputs 0 (false)

	std::cout << std::endl;
	std::cout << "Relational and logic operations on integers" << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "f : " << f << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
	std::cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << std::endl;
	std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
	std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;

    return 0;
}