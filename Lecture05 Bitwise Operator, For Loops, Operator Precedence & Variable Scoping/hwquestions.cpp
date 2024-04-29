#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Question 1

    int a, b = 1;
    a = 10;

    if (++a)
    {
        cout << b << endl;
    }
    else
    {
        cout << ++b << endl;
    }

    // Question 2

    int c = 1;
    int d = 2;

    if (c-- > 0 && ++d > 2)
    {
        cout << "Stage1 - Inside IF " << endl;
    }
    else
    {
        cout << "Stage2 - Inside Else" << endl;
    }

    // Question 3

    int e = 1;
    int f = 2;

    if (e-- > 0 || ++f > 2)
    {
        cout << "Stage1 - Inside IF" << endl;
    }
    else
    {
        cout << "Stage2 - Inside Else" << endl;
    }

    // Question 4

    int num = 3;

    cout << (25 * (++num)) << endl;

    // Question 5

    int g = 1;
    int h = g++;
    int i = ++g;

    cout << h << endl;
    cout << i << endl;

    return 0;
}

/*OUTPUT

1
Stage1 - Inside IF
Stage1 - Inside IF
100
1
3

*/