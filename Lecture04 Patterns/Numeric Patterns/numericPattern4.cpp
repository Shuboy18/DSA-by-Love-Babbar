#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n = 4 then the output should be 

    1
    2 3
    3 4 5
    4 5 6
    
    */

   int n;

   cin >> n;

   //while loop

   int row = 1;
    while (row <= n)
    {
        int column = 1;
        int value = row;
        while(column <= row){
            cout << value << " ";
            value++;
            column++;
        }
        cout << endl;
        row++;
    }

    //for loop

    for (int row = 1; row <= n; row++)
    {
        int value = row;
        for (int column = 1; column <= row; column++)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
    
}