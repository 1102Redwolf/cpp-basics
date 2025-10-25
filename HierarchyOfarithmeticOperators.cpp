#include<iostream>
using namespace std;
int main(){
    int x = 2*(3/4);   // This will evaluate to 0 because 3/4 is integer division
    int y = 2*3/4;     // This will evaluate to 1 because 2*3 is 6 and 6/4 is 1 in integer division
    cout<<x<<endl<<y; 
}