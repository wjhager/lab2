//
// Created by Wesley on 4/6/2016.
//

#include "eecs230.h"

void problem1() {
    cout << "Enter a number:" << endl;
    int var;
    cin >> var;
    if(var % 2 == 0) {
        cout << var << " is an even number" << endl;
    }
    else{
        cout << var << " is an odd number" << endl;
    }
}

double problem2() {
    cout << "Please input a mathematical operator and two numbers:" << endl;
    char inputOperator;
    double input1, input2;
    cin >> inputOperator >> input1 >> input2;
    double result;

    if(inputOperator == '+'){
        result = input1 + input2;
    }
    else if(inputOperator == '-'){
        result = input1 - input2;
    }
    else if(inputOperator == '*'){
        result = input1 * input2;
    }
    else if(inputOperator == '/'){
        result = input1 / input2;
    }
    else{
        simple_error("There's something wrong with the input");
    }

    cout << "The result is " << result;
    return result;
}

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
