#include <iostream>
using namespace std;

int main()
{
    /*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
    */

    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int column = 1;

        while (column <= n - row + 1)
        {
            cout << column << " ";
            column++;
        }

        while (column <= n)
        {
            cout << "* * ";
            column++;
        }

        column = n - row + 1;

        while (column > 0)
        {
            cout << column << " ";
            column--;
        }

        cout << endl;
        row++;
    }
}