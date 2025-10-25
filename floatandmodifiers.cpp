#include<iostream>
#include<iomanip> // for std::setprecision
using namespace std;
int main(){
    float x = 5.12664829385049284281939584389; // suffix indicates float type approx 6 to 7 decimal digits of precision
    double y = 4.6913098435485752894809145094230909458437; // double has more precision than float approx 15 to 16 decimal digits of precision
    long double z = 3.1415926535897932384626433832795028849445923078164062862089986280348253421170679821480839293848493 ; // long double has even more precision than double, approx 18 to 19 decimal digits of precision
    cout << x*y << endl << x/y << endl;




    cout<< "size of float: " << sizeof(x) << endl;
    cout<< "size of double: " << sizeof(double) << endl;
    cout<< "size of long double: " << sizeof(long double) << endl;





    cout << std::setprecision(20); // Set precision for output 
    cout << "Value of x: " << x << endl; 
    cout << "Value of y: " << y << endl;
    cout << "Value of z: " << z << endl;
 












// infinity and NaN examples

cout << endl << endl;
double a = - 1394.3823;
double b = 0.0;
double c = 0.0;
cout << "a/b yields: " << a/b << endl; 
cout << "b/c yields: " << b/c << endl; // division by zero yields NaN (Not a Number)
cout << "b/a yields: " << b/a << endl; 
} 
