#include <iostream>
#include <limits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while (x != 0) {
            int digit = x % 10;

            //Edge Case

            if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10)) {
                return 0;
            }

            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};

int main() {
    int x;
    cout << "Enter the value of x: " << endl;
    cin >> x;

    Solution solution;
    int reversed = solution.reverse(x);

    cout << "Reversed number is: " << reversed << endl;

    return 0;
}

/*

    OUTPUT
        x = 1204
        Reversed number is: 4021

        &

        x = 2147483649
        Reversed number is: 0  //Because is goes out of the range of integer!
        
*/
