#include <iostream>
using namespace std;

int main(void)
{

    /*
    if the input is n = 4 then the output will be

    D
    C D
    B C D
    A B C D

    */

    // while loop

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int column = 1;
        char ch = ('A' + n - row);
        while (column <= row)
        {
            cout << ch << " ";
            ch++;
            column++;
        }
        cout << endl;
        row++;
    }

    // for loop

    for (int row = 1; row <= n; row++)
    {
        char ch = ('A' + n - row);
        for (int column = 1; column <= row; column++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}