#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output will be

    4 3 2 1
    4 3 2 1
    4 3 2 1
    4 3 2 1
    
    */

   int n;
   cin >> n;

   //while loop

   int row = 1;
    while (row <= n)
    {
        int column = 1;
        while(column <= n){
            cout << n - column + 1 << " ";
            column++;
        }
        cout << endl;
        row++;
    }

    //for loop 

    for(int row = 1; row <= n; row++){
        for (int column = 1; column <= n; column++)
        {
            cout << n - column + 1 << " ";
        }
        cout << endl;
    }

}