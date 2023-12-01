#include<iostream>
using namespace std;

int main(void){
    /*
    if n = 4 then the output should be 

    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4

    */

    int n;
    cin >> n;

    //While loop

    int row = 1;

    while (row <= n)
    {
        int column = 1;

        while (column <= n)
        {
            cout << row <<" ";
            column++;
        }
        cout << endl;
        row++; 
    }
    
    //for loop

    for(int row = 1; row <= n; row++){
        for (int column = 1; column <= n; column++)
        {
            cout << row <<" ";
        }
        cout << endl;
    }

}