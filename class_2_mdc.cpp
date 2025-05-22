#include <iostream>

using namespace std;

// int main(){
//     // First program: Program that flips values between two variables
//     // Temporary variable = temp
//     int a = 5;
//     int b = 10;
//     int temp;
//     temp = a; // assign value of a to a temporary variable
//     a = b;
//     b = temp;
// cout << "a: " << a << endl;
// cout << "b: " << b << endl;
// return 0;
// }

// int main (){
    // second program: check if number is even or odd
    // math symbols are + - / and in programming there is modulus the percentile symbol % which only gets the value after the decimal point for example
    // 1/2 = 0.5
    // 1%2 = 5
    // 10/2 =5
    // 10%2 = 0

    // user will input a number. you will print if number is even or odd
    // cout << means to print
    // cin >> means to get variable from user
    
    // int userInput; // declaring variable for user input
    // cout << "Enter a number:"; // for the output to show enter a number for the user to input
    // cin >> userInput; // collects the number the users types in
    //  if(userInput % 2 == 0){ // the condition is if the userinput is divisble by 2 then the modulous is 0
    //     cout << "Number is even"; // if the condition is true then it will pring number is even
    // }
    // else{ // writing the else statemnet which is if the condition is not true
    //     cout << "Number is odd";
    // return 0;
    //}

    // this works but 0 isnt even so heres what to do 

    // if(check if input is 0){
    //print 0 cant be divided
    //}
    //else if (if input not 0 then check if input is even)
    //{
    // /* code */
    //}
    // else{ //input odd
    //}
        
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


