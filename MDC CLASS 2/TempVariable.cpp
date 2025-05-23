#include <iostream>

using namespace std;

int main(){
    // First program: Program that flips values between two variables
    // Temporary variable = temp
    int a = 5;
    int b = 10;
    int temp;
    temp = a; // assign value of a to a temporary variable
    a = b;
    b = temp;
cout << "a: " << a << endl;
cout << "b: " << b << endl;
return 0;
}