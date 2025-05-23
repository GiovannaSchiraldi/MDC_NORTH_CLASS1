#include <iostream>
using namespace std;
int main (){
    int userInput;

    cout << "How many rows do you want" << endl;
    cin >> userInput;

    for (int i = 0; i < userInput; i++) { 

    for (int j = 0; j <= i; j++) {
        cout << "*";
    }
    cout << endl;
    }
}

