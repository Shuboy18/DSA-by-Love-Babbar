#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "The Count of the values from 1 to N: " << endl;

    for (int i = 1; i <= n; i++) // for (initialization; condition ; updation)
    {
        cout << i << endl;
    }

    int i = 1;
    for (;;)  // Bad Practice
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;  // To stop the loop, Otherwise it will run infinite number of times
        }
        i++;
    }

    return 0;

    /* OUTPUT

        N = 5
        1
        2
        3
        4
        5

        1
        2
        3
        4
        5

    */
}