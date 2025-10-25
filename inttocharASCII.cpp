#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;
     cout << "The ASCII character for the integer " << x << " is: ";
    cout << (char)x ; // Convert integer to character using ASCII value
    }