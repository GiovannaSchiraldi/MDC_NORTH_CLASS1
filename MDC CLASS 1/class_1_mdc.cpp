#include <iostream>

using namespace std;

int main (){
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout<< "Hello, World!" << endl ;
    

    // Conditions
    if (true && true && true || false) {
        cout << "True" << endl;
    } 
    else if (true && false || true) {
        cout << "True" << endl;
    } 
    else if (false && false || true) {
        cout << "True" << endl;
    } 
    else if (false && false || false) {
        cout << "False" << endl;
    } 
    else if (true && true && true || false) {
        cout << "True" << endl;
    } 
    else {
        cout << "False" << endl;
    }

    // Switch
    char condition = 'b';
    switch (condition) {
        case 'a':
            cout << "Case 1" << endl;
            break;
        case 'b':
            cout << "Case 2" << endl;
            break;
        case 'c':
            cout << "Case 3" << endl;
            break;
        default:
            cout << "Default case" << endl;
            break;
    }

    // For loop
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    // While loop
    int flag = 0;
    while (true) {
        flag++;
        if (flag == 5) {
            continue;
        }
        cout << "Flag: " << flag << endl;
        if (flag == 10) {
            break;
        }
    }

    // Do-while loop
    bool conditionLoop = false;
    do {
        cout << "Do while loop" << endl;
    } while (conditionLoop);

    return 0;
}
