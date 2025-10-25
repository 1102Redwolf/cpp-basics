#include <iostream>
using namespace std;
int main() {

    auto var1 = 38; // Example: initializes var1 as int
    auto var2 = 3.14; // Example: initializes var2 as double
    auto var3 = "Hello, World!"; // Example: initializes var3 as const char*
    auto var4 = true; // Example: initializes var4 as bool
    auto var5 = 13.0f; // Example: initializes var5 as float
    auto var6 = 42ll; // Example: initializes var6 as long long int
    auto var7 = 0x1A; // Example: initializes var7 as int (hexadecimal)
    auto var8 = 123u; // Example: initializes var8 as unsigned int
    auto var9 = 0b1010; // Example: initializes var9 as int (binary)
    auto var10 = 123ul; // Example: initializes var10 as unsigned long


    cout << "var1: " << var1 << endl 
            << "var2: " << var2 << endl
            << "var3: " << var3 << endl
            << "var4: " << var4 << endl
            << "var5: " << var5 << endl
            << "var6: " << var6 << endl
            << "var7: " << var7 << endl
            << "var8: " << var8 << endl
            << "var9: " << var9 << endl
            << "var10: " << var10 << endl;



    cout << "var1 occupies = " << sizeof(var1) << " bytes" << endl
            << "var2 occupies = " << sizeof(var2) << " bytes" << endl
            << "var3 occupies = " << sizeof(var3) << " bytes" << endl
            << "var4 occupies = " << sizeof(var4) << " bytes" << endl
            << "var5 occupies = " << sizeof(var5) << " bytes" << endl
            << "var6 occupies = " << sizeof(var6) << " bytes" << endl
            << "var7 occupies = " << sizeof(var7) << " bytes" << endl
            << "var8 occupies = " << sizeof(var8) << " bytes" << endl
            << "var9 occupies = " << sizeof(var9) << " bytes" << endl
            << "var10 occupies = " << sizeof(var10) << " bytes" << endl; 
}