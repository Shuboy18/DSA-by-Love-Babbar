#include <iostream>
using namespace std;

int main(void)
{

    /*
    if the input is n = 4 then the output will be

    * * * *
    * * *
    * *
    * 
    
    */

    // while loop

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int column = 1;
        int result = n - row + 1;
        while (column <= result)
        {
            cout << "* ";
            column++;
        }
        cout << endl;
        row++;
    }

    // for loop

    for (int row = 1; row <= n; row++)
    {
        int result = n - row + 1;
        for (int column = 1; column <= result; column++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}