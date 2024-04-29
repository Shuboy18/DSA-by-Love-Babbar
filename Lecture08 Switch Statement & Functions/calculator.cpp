#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter the value of a: " << endl;
    cin >> a;

    cout << "Enter the value of b: " << endl;
    cin >> b;

    cout << "Enter the operator you want to perform: " << endl;
    cin >> op;

    switch( op ){
        case '+':
            cout << "Addition of a & b: " << (a + b) << endl;
            break;

        case '-':
            cout << "Subtraction of a & b: " << (a - b) << endl;
            break;

        case '*':
            cout << "Multiplication of a & b: " << (a * b) << endl;
            break;

        case '/':
            cout << "Division of a & b: " << (a / b) << endl;
            break;

        case '%':
            cout << "Mudulos of a & b: " << (a % b) << endl;
            break;

        default:
            cout << "Invalid Input!" << endl;
    }

    return 0;
}

/*

    OUTPUT
        x = 1204
        Reversed number is: 4021

        &

        x = 2147483649
        Reversed number is: 0  //Because is goes out of the range of integer!
        
*/
