#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for(int i = 0; i <= 30; i++){

            if (ans == n){
                return true;
            }

            if(ans < INT32_MAX/2){
                ans = ans * 2;;
            }
        }

        return false;
    }
};

int main() {
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    Solution solution;
    int answer = solution.isPowerOfTwo(n);

    if(answer == 0){
        cout << "False" << endl;
    }
    else{
        cout << "True" << endl;
    }

    return 0;
}

/*

    OUTPUT
        n = 12
        False

        &

        n = 16
        True
        
*/
