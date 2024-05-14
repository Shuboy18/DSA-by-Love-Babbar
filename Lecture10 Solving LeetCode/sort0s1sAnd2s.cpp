#include <iostream>
#include <vector>
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

// Sort 0's, 1's and 2's
void sort012(vector<int>& arr, int size) {
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        switch(arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}

int main(void) {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr;
    takingInput(arr, size);

    cout << "Original Array: ";
    printArray(arr, size);

    sort012(arr, size);

    cout << "Sorted Array: ";
    printArray(arr, size);

    return 0;
}

/*

    OUTPUT:
    Enter the size of the array: 7
    Enter the elements of the array: 
    0 1 2 0 2 1 2
    Original Array: 0 1 2 0 2 1 2 
    Sorted Array: 0 0 1 1 2 2 2 


*/