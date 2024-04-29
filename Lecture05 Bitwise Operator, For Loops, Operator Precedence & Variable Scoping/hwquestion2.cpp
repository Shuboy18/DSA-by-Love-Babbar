#include <iostream>
using namespace std;

int main()
{

    // Question 1

    // for (int i = 1; i <= 5; i++)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // Question 2

    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // Question 3

    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";

    //     if (i & 1)
    //     {
    //         continue;
    //     }

    //     i++;
    // }

    // // Question 4

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; i <= 5; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }

    // // Question 5

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; i <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }

            cout << i << " " << j << endl;
        }
    }

    return 0;

    /* OUTPUT

        1 3 5
        Infinite Loop
        0 3 5 7 9 11 13 15 
        Infinite loop
        0 0
        0 1
        0 2
        0 3
        0 4
        0 5
        0 6
        0 7
        0 8
        0 9
        1 1
        1 2
        1 3
        1 4
        1 5
        1 6
        1 7
        1 8
        2 2
        2 3
        2 4
        2 5
        2 6
        2 7
        3 3
        3 4
        3 5
        3 6
        4 4
        4 5

    */
}