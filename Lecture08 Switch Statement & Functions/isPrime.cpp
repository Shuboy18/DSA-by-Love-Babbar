#include <iostream>
using namespace std;

bool isPrime(int n){

    for (int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
};

int main(void){

    int n;

    cout << "Enter the value: " << endl;
    cin >> n;

    int answer = isPrime(n);

    if( answer == 0){
        cout << "Not A Prime Number!" << endl;
    }else{
        cout << "Prime Number!" << endl;
    }

}

/*

    OUTPUT: 

    if n = 13 

    Prime Number!

    if n = 9 

    Not A Prime Number!

*/