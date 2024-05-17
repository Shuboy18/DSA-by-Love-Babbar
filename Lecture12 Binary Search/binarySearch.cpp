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


// Binary Search Function

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size -1;
    // int mid = (start + end)/2;

    // Optimized 

    int mid = start + (end - start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        // mid = (start + end)/2;  

        mid = start + (end - start)/2;
    }

    return -1;
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
    int key;

    cout << "Enter the Size of the Array: " << endl;
    cin >> size;

    int arr[100];

    takingInput(arr, size);

    cout << "Enter the key to search: " << endl;
    cin >> key;

    int answer = binarySearch(arr, size, key);

    if(answer == -1){
        cout << "Key not found" << endl;
    }else{
        cout << "Key found at index: " << answer << endl;
    }

}


/*

    OUTPUT:

    Enter the Size of the Array: 
    7
    Enter the elements of the array: 
    1 2 3 4 5 6 7
    Enter the key to search: 
    6
    Key found at index: 5


    TIME_COMPLEXITY:

    BEST_CASE: O(1)
    AVERAGE_AND_WORST_CASE: O(log n)
    
*/