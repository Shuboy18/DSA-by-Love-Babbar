#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Taking Input

void takingInput(vector<int>& arr, int size) {
    cout << "Enter the elements of the array: " << endl;
    int element;

    for (int i = 0; i < size; i++) {
        cin >> element;
        arr.push_back(element);
    }
}

// Print the Array

void printArray(vector<int>& arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Sort 0's & 1's

vector<int> sort0And1(vector<int>& arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        while (arr[start] == 0) {
            start++;
        }
        while (arr[end] == 1) {
            end--;
        }

        if (start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    return arr;
}

int main(void) {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr;
    takingInput(arr, size);

    cout << "Original Array: ";
    printArray(arr, size);

    vector<int> answer = sort0And1(arr, size);

    cout << "Sorted Array: ";
    printArray(answer, size);

    return 0;
}

/*

    OUTPUT:

    Enter the size of the array: 6
    Enter the elements of the array: 
    0 1 0 1 0 1  
    Original Array: 0 1 0 1 0 1 
    Sorted Array: 0 0 0 1 1 1 

*/