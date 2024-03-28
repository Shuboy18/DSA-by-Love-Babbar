#include <iostream>
using namespace std;

int main(void)
{

    /*
    if the input is n = 4 then the output will be

    A
    B C
    C D E
    D E F G

    */

    // while loop

    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int column = 1;
        while (column <= row)
        {
            char ch = ('A' + row + column - 2);
            cout << ch << " ";
            column++;
        }
        cout << endl;
        row++;
    }

    // for loop

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            char ch = ('A' + row + column - 2);
            cout << ch << " ";
        }
        cout << endl;
    }
}