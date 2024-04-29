#include <iostream>
using namespace std;

int main()
{
    int n , sum = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "The Sum of the values from 1 to N: ";

    for (int i = 1; i <= n; i++) 
    {
        sum += i;
    }

    cout << sum;

    return 0;

    /* OUTPUT

    N = 10
    The Sum of the values from 1 to N: 55
    */
}