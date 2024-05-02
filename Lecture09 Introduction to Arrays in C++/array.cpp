#include <iostream>
using namespace std;

// int main(void){
//     int num[5];

//     cout << "Value at First Index " << num[0] << endl;     //Garbadge Value
// }

int main(void){

    //Initializing an array

    int num[10] = {2, 3, 5, 8};

    //Accessing an array

    cout << "Value at Second Index " << num[2] << endl;

    //Print the elements of the array

    int m = 10;

    for (int i = 0; i < m; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;
    
    int first[10] = {0};

    int n = 10;

    for (int i = 0; i < n; i++)
    {
        cout << first[i] << " ";   // All the elements contains Zero
    }

    cout << endl;


    //How to initialize an array contains only element 1

    /*
        We use fill_n property to fill all the elements of the array with same element!
    
    */

    int second[10];

    fill_n(second, 10, 1);

    for (int i = 0; i < n; i++)
    {
        cout << second[i] << " ";   // All the elements contains One
    }

}

/*

    OUTPUT:

    Value at Second Index 5
    2 3 5 8 0 0 0 0 0 0 
    0 0 0 0 0 0 0 0 0 0 
    1 1 1 1 1 1 1 1 1 1 

*/