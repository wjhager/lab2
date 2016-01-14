#include "eecs230.h"

//
// Lab 2 EXAMPLE functions
//

/* This function takes an input integer and returns whether the resultant integer is odd or even.
 */
bool problem1() {
    int testInt;
    cout << "Please enter an integer: ";
    cin >> testInt;
    if (testInt % 2 == 1) {
        cout << "The integer is odd." << endl; // endl is the same as "\n" << flush;
        return true;
    }
    else {
        cout << "The integer is even." << endl;
        return false;
    }
}

/* This function takes three inputs (an operation and two operands and returns a result.
 * The operation is in the form of a character, either +, -, *, or /, representing math
 * operations. The operands can be either integers or doubles, but the program will assume
 * doubles, which can process most integers. It will then print/return the result of the operation.
 */
double problem2() {
    char oper;
    double op_a, op_b, result;
    cout << "Please enter an operation for (a OPERATION b): ";
    cin >> oper;
    cout << "Please enter the first operand: ";
    cin >> op_a;
    cout << "Please enter the second operand: ";
    cin >> op_b;
    switch(oper) {
        case '+':
            result = op_a+op_b;
            break;
        case '-':
            result = op_a-op_b;
            break;
        case '*':
            result = op_a*op_b;
            break;
        case '/':
            result = op_a/op_b;
            break;
        default:
            simple_error("An invalid operation was entered!");
    }
    cout << "The result is " << result << endl;
    return result;
}

/* This function takes two inputs (a name and a gender) and returns a string depending on gender.
 */
void problem3() {
    enum Gender {male, female, other, unknown};
    Gender friend_gender = unknown;
    char in_gender;
    string friend_name;

    cout << "Please enter your friend's name: ";
    cin >> friend_name;
    cout << "Please enter your friend's gender: ";
    cin >> in_gender;

    switch(in_gender) {
        case 'm':
            friend_gender = male;
            break;
        case 'f':
            friend_gender = female;
            break;
        case 'o':
            friend_gender = other;
            break;
        default:
            simple_error("You didnt enter a gender I know about!");
    }

    cout << "If you see " << friend_name;
    switch(friend_gender) {
        case male:
            cout << " please ask him to call me." << endl;
            break;
        case female:
            cout << " please ask her to call me." << endl;
            break;
        case other:
            cout << " please ask h'x to call me." << endl;
            break;
        default:
            simple_error("Something isn't right!");
    }
}

/* This function prompts the user for an integer input of an age and repeats it back.
 * If the friend is under 12, it will be also say their next age.
 * If the friend is 17, it will say that they will be able to vote.
 * If the friend is over 70, it will compliment them on their life's work.
 */
void problem45() {
    int age;
    cout << "Please enter your friend's age: ";
    cin >> age;
    if (!cin) // check if something other than an age was entered.
        simple_error("An invalid age was entered.");
    if (age <= 0 || age >= 110)
        simple_error("you're kidding!");
    else
        cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
    if (age < 12)
        cout << "Next year you will be " << (age+1) << "!" << endl;
    else if (age == 17)
        cout << "Next year you will be able to vote!" << endl;
    else if (age > 70)
        cout << "I hope you're enjoying retirement!" << endl;
}

// This is the review portion of the lab.
int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    char mychar = 'd'; mychar += 12; // ! surprise!
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = "5";
    return 0;
}

/* The main function, or the "entry function" of the lab2 program, simply calls the other
 * functions to run.
 */
int main() {
    cout << ">> I'm going to run the lab review now:" << endl;
    illegalStatements();

    cout << ">> I'm going to run lab problem 1 now:" << endl;
    problem1();

    cout << ">> I'm going to run lab problem 2 now:" << endl;
    problem2();

    cout << ">> I'm going to run lab problem 3 now:" << endl;
    problem3();

    cout << ">> I'm going to run lab problem 4/5 now:" << endl;
    problem45();

    return 0; // Lets the operating system know everything ran successfully.
}

