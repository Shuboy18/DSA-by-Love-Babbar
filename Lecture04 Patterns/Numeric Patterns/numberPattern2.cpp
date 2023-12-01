#include<iostream>
using namespace std;

int main(void){
    
    /*
     if n = 4 then the Output will be 

     1 2 3 4
     1 2 3 4
     1 2 3 4
     1 2 3 4
    
    */

   int n;

   cin >> n;

   //while Loop

   int row = 1;
    while (row <= n)
    {
        int column = 1;

        while (column <= n)
        {
            cout << column << " ";
            column++;
        }
        cout << endl;
        row++;
    }

    //for loop

    for (int row = 1; row <= n; row++)
    {
        for (int column = 0; column <= n; column++)
        {
            cout << column << " ";
        }
        cout << endl;
    }
} 
