#include <iostream>
using namespace std;

int setBits(int n){

    int count = 0;

    while( n != 0){
        if( n & 1 == 1){
            count++;
        }

        n = n >> 1;
    }

    return count;

};

int main(void){

    int a, b;

    cout << "Enter the value of a: " << endl;
    cin >> a;

    cout << "Enter the value of b: " << endl;
    cin >> b;

    int answer = setBits(a) + setBits (b);

    cout << "Total Number of Setbits are: " << answer << endl;

}