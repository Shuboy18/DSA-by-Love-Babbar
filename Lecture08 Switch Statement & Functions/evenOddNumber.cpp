#include <iostream>
using namespace std;

bool isEven(int a){

    if(a & 1 ){
        return 0;
    }

    return 1;
}

int main(){

    int num;

    cout << "Enter the value: " << endl;
    cin >> num;

    //Edge Case

    if(num == 0){
        cout << "The number is Zero!" << endl;
        return 0;
    }

    int answer = isEven(num);

    if(answer == 0){
        cout << "The Number is ODD!" << endl;
    }else{
        cout << "The Number is EVEN!" << endl;
    }

    return 0;
}


/*

    OUTPUT:

    Enter the value: 
    6
    The Number is EVEN!


*/