#include<iostream>
using namespace std;

int main(void){
    
    /*
     if the input n = 4 then the output should be 

     * * * *
     *     *
     *     *
     * * * *
    
    */

   int n;
   cin >> n;

   // while loop

   int row = 1;

   while (row <= n)
   {
    int column = 1;

    while (column <= n)
    {
        if (row == 1 || row == n || column == 1 || column == n)
        {
            cout << "* ";
        } else {
            cout << "  ";
        }
        column++; 
    }
    cout << endl;
    row++;
}

    //for loop

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= n; column++)
        {
            if (row == 1 || row == n || column == 1 || column == n)
            {
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;
        
    }

}
