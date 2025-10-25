#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if(x>99 && x<1000){
        cout << "Valid 3-digit number";
    }
    else{
        cout << "Invalid number";
    }
    return 0;
} 