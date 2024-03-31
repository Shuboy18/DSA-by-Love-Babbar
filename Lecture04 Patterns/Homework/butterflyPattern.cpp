#include <iostream>
using namespace std;

int main()
{
    /*
     *                 *
     * *             * *
     * * *         * * *
     * * * *     * * * *
     * * * * * * * * * *
     * * * *     * * * *
     * * *         * * *
     * *             * *
     *                 *
     */

    int n;

    cout << "Enter the value of n : ";
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int column = 1;

        while (column <= row)
        {
            cout << "* ";
            column++;
        }

        column = 1;

        while (column <= n - row)
        {
            cout << "    ";
            column++;
        }

        column = 1;

        while (column <= row)
        {
            cout << "* ";
            column++;
        }

        cout << endl;
        row = row + 1;
    }

    row = 1;

    while (row < n)
    {
        int column = 1;

        while (column < n - row + 1)
        {
            cout << "* ";
            column++;
        }

        while (column <= n)
        {
            cout << "    ";
            column++;
        }

        column = 1;

        while (column < n - row + 1)
        {
            cout << "* ";
            column++;
        }

        cout << endl;
        row = row + 1;
    }
    
    return 0;
}