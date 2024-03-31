#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output should be 

    1
    2 3
    3 4 5
    4 5 6 7
    
    */

   int n;

   cin >> n;

   //while loop

   int row = 1;
    while (row <= n)
    {
        int column = 1;
        while(column <= row){
            cout << row + column - 1 << " ";
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
            cout << row + column - 1 << " ";
        }
        cout << endl;
    }
    
}