#include<iostream>
using namespace std;

int main(void){

    /*
    if the input is n= 4 then the output should be

    1 
    2 3
    4 5 6
    7 8 9 10
    
    */

   //while loop

   int n;

   cin >> n;

   int row = 1;
   int count = 1;
   while (row <= n)
   {
    int column = 1;
    while (column <= row)
    {
        cout << count << " ";
        count++;
        column++;
    }
    cout << endl;
    row++;
   }


   //for loop

   for (int row = 1; row <= n; row++)
   {
    for (int column = 1; column <= row; column++)
    {
        cout << count << " ";
        count++;
    }
    cout << endl;
   }
   
}