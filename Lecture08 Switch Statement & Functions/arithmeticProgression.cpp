#include <iostream>
using namespace std;

int arithmeticProgression(int n){
    int aP = 3 * n + 7;

    return aP;
}

int main(){

    int n;

    cout << "Enter the value of n: " << endl;
    cin >> n;

    int answer = arithmeticProgression(n);

    cout << "Answer is: " << answer << endl;

    return 0;
}

/*

    OUTPUT:

    if n = 3 

    Answer is: 16

*/