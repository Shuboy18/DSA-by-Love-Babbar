#include <iostream>
using namespace std;

int main(void)
{

    /*
    if the input is n = 4 then the output will be

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1

    */

    // while loop

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Print Spaces or 1st Triangle
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // Print 2nd Triangle
        int column = 1;
        while (column <= row)
        {
            cout << column;
            column++;
        }

        // Print 3rd Triangle

        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }

    // for loop

    // Print for 1st Triangle

    for (int row = 1; row <= n; row++)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // Print for Second Triangle

        for (int column = 1; column <= row; column++)
        {
            cout << column;
        }

        // Print for 3rd Triangle
        int start = row - 1;
        while(start)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }
}