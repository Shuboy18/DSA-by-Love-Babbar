#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not a Prime Number!" << endl;
    }
    else
    {
        cout << "Prime Number" << endl;
    }

    // Using Continue in loops

    for (int i = 1; i <= 5; i++)
    {
        cout << "Hi!" << endl;
        cout << "Hey!" << endl;
        continue;
        cout << "Arey Bhai kidar hai?" << endl; //This statement will not be executed as continue skips the iteration
    }

    return 0;

    /* OUTPUT

    N = 7
    Prime Number

    N = 9
    Not a Prime Number!

    Hi!
    Hey!
    Hi!
    Hey!
    Hi!
    Hey!
    Hi!
    Hey!
    Hi!
    Hey!
    */
}