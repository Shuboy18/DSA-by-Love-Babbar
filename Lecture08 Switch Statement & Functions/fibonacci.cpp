#include <iostream>
using namespace std;

int fibonacci(int n){

    int a = 0;
    int b = 1;
    int c = -1;

    //Edge Case

    if( n <= 2){
        return n - 1;
    }

    for (int i = 2; i < n; i++){

        c = a+ b;
        a = b;
        b = c;

    }

    return c;
};

int main(void){

    int n;

    cout << "Enter the value of n: " << endl;
    cin >> n;

    int answer = fibonacci(n);

    cout << "The fibonacci number is: " << answer << endl;
}

/*

    OUTPUT:

    if n = 5

    The fibonacci number is 3

*/