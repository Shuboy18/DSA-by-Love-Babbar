#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {

        //Edge Case

        if (n <= 0)
            return false;
        
        //As we know the power of 2 has only one bit in its binary representation so we will use bitwise AND to check it if has exactly one bit or not!
        //Let's understand it with an example of integer 8.
        /*

            Binary representation of integer 8 = 1000 which is our n
            Since n - 1 is 8 - 1 = 7 and the binary representation of 7 is 0111
            so by performing & operation we will get 

            1000
         &  0111
         ---------
            0000

            which is equal to 0 so that means it is power of 2;
        
        */
        return (n & (n - 1)) == 0;
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
