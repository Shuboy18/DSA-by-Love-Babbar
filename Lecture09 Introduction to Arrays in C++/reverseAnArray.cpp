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


// Reverse the array

void reversedArray(int arr[], int size){

    int start = 0;
    int end = size -1;

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

        // We can also use swap function

        // swap(arr[start], arr[end]); from this we can achieve the same result;
    }

}

// Print the Array

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main(void){

    int size;

    cout << "Enter the Size of the Array: " << endl;
    cin >> size;

    int arr[100];

    takingInput(arr, size);

    cout << "Original Array: " << endl;

    printArray(arr, size);

    reversedArray(arr, size);

    cout << "Reversed Array! " << endl;

    printArray(arr, size);

}


/*

    OUTPUT:

    Enter the Size of the Array: 
    5
    Enter the elements of the array: 
    1 2 3 4 5
    Original Array: 
    1 2 3 4 5 
    Reversed Array! 
    5 4 3 2 1 

*/