#include <iostream>
using namespace std;
int main(){
    int value { 5 };
    
    //Increment one by one
    value = value + 1; //6
    cout << "The value is : " << value << endl; // 6
    
    value = 5; // Reset value to 5
    
    //Decrement one by one
    value = value - 1; // 4
    cout << "The value is : " << value << endl; //4 

    // Increment using prefix increment
    value = 5; // Reset value to 5
    ++value; // 6
    cout << "The value is : " << value << endl; // 6

    value = 5; // Reset value to 5

    // Increment using postfix increment
    value = 5; // Reset value to 5
    value++; // 6
    cout << "The value is : " << value << endl; // 6

    // Decrement using prefix decrement
    value = 5; // Reset value to 5
    --value; // 4
    cout << "The value is : " << value << endl; // 4

    // Decrement using postfix decrement
    value = 5; // Reset value to 5
    value--; // 4
    cout << "The value is : " << value << endl; // 4
}