#include <iostream>
using namespace std;

int main(void)
{

    /*
    if the input is n = 4 then the output will be

    * * * *
      * * *
        * *
          *
    
    */

    // while loop

    int n;

    cout<<"Enter the value of n : ";
    cin>>n;

    int row = 1;

    while(row <= n) {
        int column = 0;

        while(column < row) {
            cout<<"  ";
            column++;
        }

        while(column <= n) {
            cout<<"* ";
            column++;
        }

        cout<<endl;
        row = row + 1;
    }

    // for loop

    for (int row = 1; row <= n; row++) {
        for (int column = 0; column < row; column++) {
            cout << "  ";
        }

        for (int column = row; column <= n; column++) {
            cout << "* ";
        }

        cout << endl;
    }
}