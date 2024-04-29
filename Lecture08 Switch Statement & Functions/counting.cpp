#include <iostream>
using namespace std;

void printCounting(int n){ //When a function does not return any output then we use void 
    
    for( int i = 1; i <= n; i++){
        cout << i << " ";
    }

    cout << endl;
};

int main(void){

    int num;

    cout << "Enter the Value: " << endl;
    cin >> num;

    printCounting(num);

}

/*

    OUTPUT:

    if n = 20 

    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

*/