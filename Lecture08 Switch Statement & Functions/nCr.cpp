#include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

    for (int i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
};

int nCr(int n, int r){

    int neumerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    return neumerator / denominator;
};

int main(){

    int n, r;

    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "Enter the value of r: " << endl;
    cin >> r;

    int answer = nCr(n , r);

    cout << "The Combination of given Numbers are: " << answer << endl;

    return 0;
}


/*

    OUTPUT: 

    if n = 8 & r = 4

    The Combination of given Numbers are 70

*/