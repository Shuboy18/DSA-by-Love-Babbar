#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output will be

    A 
    B c
    D E F
    G H I J
    
    */

   //while loop

   int n;

   cin >> n;

   int row = 1;
   char ch = 'A'; //Since both the code are in same class I am onlydeclaring ch one time

    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            cout << ch << " ";
            ch++;
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
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}