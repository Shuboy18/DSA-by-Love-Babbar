#include <iostream>
using namespace std;

// Taking Input

int takingInput(int arr[], int size){

    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    return 0;
}

// Print the Array

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Swap Alternate 

void swapAlterante(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i + 1 < size){
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

int main(void){

    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[100];

    takingInput(arr, size);

    cout << "Original Array: " << endl;

    printArray(arr, size);

    swapAlterante(arr, size);

    cout << "Swap Alternate Array! " << endl;

    printArray(arr, size);
}

/*

    OUTPUT:

    Enter the size of the array: 
    5
    Enter the elements of the array: 
    2 1 3 4 7 
    Original Array: 
    2 1 3 4 7 
    Swap Alternate Array! 
    1 2 4 3 7 

*/