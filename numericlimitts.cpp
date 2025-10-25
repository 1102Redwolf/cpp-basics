#include <iostream>
#include <limits>
using namespace std;
int main() {
    cout << "the range for int is from: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "the range for short is from: " << numeric_limits<short>::min() << " to " << numeric_limits<short>::max() << endl;
    cout << "the range for long is from: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "the range for long long is from: " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;
    cout << "the range for float is from: " << numeric_limits<float>::min() << " to " << numeric_limits<float>::max() << endl;
    cout << "the range for double is from: " << numeric_limits<double>::min() << " to " << numeric_limits<double>::max() << endl;
    cout << "the range for long double is from: " << numeric_limits<long double>::min() << " to " << numeric_limits<long double>::max() << endl;

}