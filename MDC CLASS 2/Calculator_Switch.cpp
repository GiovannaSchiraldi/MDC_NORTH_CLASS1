#include <iostream>
using namespace std;
        
    int main (){
        // Third program: do a calculator with switch case 
        // The program should as the user for 2 numbers and then ask if they wnat to add, subtract, multiply, or divide
        // if you want float for the vairables delete modulus however if you want modulus keep the variables as intergers.
        float userInput1;
        float userInput2;
        char control;
        float answer;

        cout << "Enter 2 numbers" << endl;
        cin >> userInput1;
        cin >> userInput2;
        cout << "if you want to add press +" << endl;
        cout << "if you want to subtract press -" << endl;
        cout << "if you want to multiply press *" << endl;
        cout << "if you want to divide press /" << endl;
        // cout << "If you want to do a modulus press %" << endl; // If you are using int variables
        cout << "If you want to do a power press ^" << endl;
        cin >> control;

        switch (control)
        {
            case '+':
                answer = userInput1 + userInput2;
                cout << "The sum is " << answer << endl;
                break;
                
            case '-':
                answer = userInput1 - userInput2;
                cout << "The difference is " << answer << endl;
                break;

            case '*':
                answer = userInput1 * userInput2;
                cout << "The product is " << answer << endl;
                break;

            case '/':
                answer = userInput1 / userInput2;
                cout << "The division is " << answer << endl;
                break;
            
            // case '%': // if you are using int variables
            //     answer = userInput1 % userInput2;
            //     cout << "The modulus is " << answer << endl;
            //     break;

            case '^':
                answer = 1;
                for (int i = 0; i < userInput2; i++) {
                answer = userInput1 * answer;
             }
                cout << "The power is " << answer << endl;
                break;
            
            default:
                cout << "Error" << endl;
                break;
        }
        return 0;
    }