#include<iostream>
using namespace std;

int main(){


    /*
    if n = 4 then output should be

    * * * *
    * * * *
    * * * *
    * * * *
    
    */

    int n;
    cin >> n;

    //While Loop

    int row = 1;

    while (row <= n)
    {
        int column = 1;

        while (column <= n)
        {
            cout << "* ";
            column++;
        }
        cout << endl;
        row++;  
    }

    //for loop

    for(int row = 1; row <= n; row++){
        for(int column = 1; column <= n; column++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}