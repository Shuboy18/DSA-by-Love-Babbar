#include <iostream>
using namespace std;

int main(void)
{

    /*
    if the input is n = 4 then the output will be

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1

    */

    // while loop

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int row = 1;

    while(row <= n) {
        int column = 0;

        while(column < n-row) {
            cout<<"  ";
            column++;
        }

        int count = 1;

        while(count <= row) {
            cout<<count<<" ";
            count++;
        }

        count--;

        while(count > 1) {
            count--;
            cout<<count<<" ";
        }

        cout<<endl;
        row++;
    }

    // for loop

    for (int row = 1; row <= n; row++) {
        for (int column = 0; column < n - row; column++) {
            cout << "  ";
        }

        for (int count = 1; count <= row; count++) {
            cout << count << " ";
        }

        for (int count = row - 1; count > 0; count--) {
            cout << count << " ";
        }

        cout << endl;
    }

    return 0;
}