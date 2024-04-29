#include <iostream>
#include <limits>
using namespace std;

class Solution {
public:
    int bitwiseCompliment(int n) {
        int m = n;
        int mask = 0;

        //Edge Case

        if(n == 0){
            return 1;
        }

        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) & mask;
        

        return ans;
    }
};

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    Solution solution;
    int  answer= solution.bitwiseCompliment(n);

    cout << "Bitwise Compliment of the number is: " << answer << endl;

    return 0;
}

/*

    OUTPUT:

    n = 5
    Bitwise Compliment of the number is: 2


*/