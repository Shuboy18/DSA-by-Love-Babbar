#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output will be

    A B C D
    E F G H
    I J K L
    M N O P
    
    */

   //while loop

   int n;

   cin >> n;

   int row = 1;
   char ch = 'A';   //Since both the code are in same class I am onlydeclaring ch one time

    while (row <= n)
    {
        int column = 1;
        while (column <= n)
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
        for (int column = 1; column <= n; column++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}