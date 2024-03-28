#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output will be

    A 
    B B 
    C C C 
    D D D D
    
    */

   //while loop

   int n;

   cin >> n;

   int row = 1;

    while (row <= n)
    {
        int column = 1;
        while (column <= row)
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
        for (int column = 1; column <= row; column++)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}