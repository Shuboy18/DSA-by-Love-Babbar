#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output will be

    A A A A
    B B B B
    C C C C
    D D D D
    
    */

   //while loop

   int n;

   cin >> n;

   int row = 1;

    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            column++;
        }
        cout << endl;
        row++;
    }
    
    //for loop

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n; column++)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}