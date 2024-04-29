#include<iostream>
using namespace std;

int power(){

    int a , b;  //By taking input in the function we can reduce the lines of code tremendously!

    cout << "Enter the value of a: " << endl;  
    cin >> a;

    cout << "Enter the value of b: " << endl;
    cin >> b;

    int ans = 1;

    for(int i = 1; i <= b; i++){
        ans *= a;
    }

    return ans;
};

int main(){

    int answer = power();
    cout << "Answer is: " << answer << endl;

    return 0;
}

/*

 OUTPUT:

 if a = 12 & b = 2 

 Answer is: 144

*/