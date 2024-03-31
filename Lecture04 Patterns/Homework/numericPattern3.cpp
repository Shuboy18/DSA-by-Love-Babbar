#include <iostream>
using namespace std;

int main(void)
{

    /*
    if the input is n = 4 then the output will be

          1
        2 3
      4 5 6
    7 8 9 10

    */

    // while loop

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int row = 1;
    int count = 1;

    while(row <= n) {
        int column = 0;

        while(column < n-row) {
            cout<<"  ";
            column++;
        }

        while(column < n) {
            cout<<count<<" ";
            count++;
            column++;
        }

        cout<<endl;
        row++;
    }

    // for loop

    int counter = 1;
    for (int row = 1; row <= n; row++)
    {
        int space = n - row + 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        for (int column = 1; column <= row; column++)
        {
            cout << counter;
            counter++;
        }
        cout << endl;
    }
}