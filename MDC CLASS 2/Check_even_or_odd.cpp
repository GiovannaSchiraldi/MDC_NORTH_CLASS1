#include <iostream>

using namespace std;

    int main (){
    // second program: check if number is even or odd
    // math symbols are + - / and in programming there is modulus the percentile symbol % which only gets the value after the decimal point for example
    // 1/2 = 0.5
    // 1%2 = 5
    // 10/2 =5
    // 10%2 = 0

    // user will input a number. you will print if number is even or odd
    // cout << means to print
    // cin >> means to get variable from user
    
    int userInput; // declaring variable for user input
    cout << "Enter a number:"; // for the output to show enter a number for the user to input
    cin >> userInput; // collects the number the users types in
     if(userInput % 2 == 0){ // the condition is if the userinput is divisble by 2 then the modulous is 0
        cout << "Number is even"; // if the condition is true then it will pring number is even
    }
    else{ // writing the else statemnet which is if the condition is not true
        cout << "Number is odd";
    return 0;
    }
    }

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