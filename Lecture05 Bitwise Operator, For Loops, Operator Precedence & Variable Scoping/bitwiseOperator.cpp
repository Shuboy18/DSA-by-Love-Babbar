#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << " a & b = " << (a & b) << endl;
    cout << " a | b = " << (a | b) << endl;
    cout << " ~a  ~b = " << (~a) << " " << (~b) << endl;
    cout << " a ^ b = " << (a ^ b) << endl;

    // Left & Right Shift Operators
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // Pre/Post Increment/Decrement

    int i = 7;

    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;

    return 0;
}

/*OUTPUT

 a & b = 4
 a | b = 6
 ~a  ~b = -5 -7
 a ^ b = 2

 8
4
38
84

8
8
9
7

*/