#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 3 then the output will be

    A B C D
    B C D E
    C D E F
    D E F G
    
    */

   //while loop

   int n;

   cin >> n;

   int row = 1;
   char ch = 'A';  //Since both the code are in same class I am onlydeclaring ch one time

    while (row <= n)
    {
        int column = 1;
        while (column <= n)
        {
            char result = ch + row + column - 2; /*Ok so here I declared a char result because after calculating the value with ch the value is converted into int value so to display in characters we have to type caste it again into char there is an alternate way as well look at the example of Alphabetic pattern pattern4*/
            cout << result << " ";
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
            char result = ch + row + column -2;
            cout << result << " ";
        }
        cout << endl;
    }
}