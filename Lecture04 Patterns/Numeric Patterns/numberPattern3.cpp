#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output will be

    1
    2 2
    3 3 3
    4 4 4 4
    
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
            cout << row << " ";
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
            cout << row << " ";
        }
        cout << endl;
    }
    


}