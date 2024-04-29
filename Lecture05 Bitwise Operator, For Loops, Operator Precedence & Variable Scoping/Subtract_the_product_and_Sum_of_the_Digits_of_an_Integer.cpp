#include <iostream>
using namespace std;

int subtractProductAndSum(int n)
{
    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        product *= remainder;
        sum += remainder;
        n = n / 10;
    }

    int result = product - sum;

    return result;
}

int main()
{

    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int result = subtractProductAndSum(n);
    cout << "Result: " << result << endl;

    return 0;
}