#include <iostream>
using namespace std;

void printArray(int arr[], int size){

    cout << "Printing the Array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << endl << "Printing Done!" << endl;
    
};

int main(void){

    int number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(number, 10);

    int size = sizeof(number)/sizeof(int);      // Size of the array

    cout << "Size of the array is: " << size << endl;

}

/*
    It's essential to be mindful of the limitations of methods like `sizeof()` when determining 
    array sizes programmatically.

    for e.g 

    int arr[4] = {1, 2, 3, 4};

    we call the function by telling 

    printArray(arr, 8);

    so the output will be

    1 2 3 4 0 0 0 0

    and the size of the array will be 8 not 4


    Note: While the `sizeof()` method is commonly used, it can't accurately provide the size of an 
    array dynamically allocated or passed to functions. For instance, in the given example where 
    `printArray(arr, 8)` is called, it doesn't reflect the actual size of the array `arr`, which is 
    4 elements. Instead, it prints 8 elements, as per the specified size, leading to potential 
    misinterpretation of array dimensions.

*/

/*

    OUTPUT:

    Printing the Array: 
    1 2 3 4 5 6 7 8 9 10 
    Printing Done!
    Size of the array is: 10

*/