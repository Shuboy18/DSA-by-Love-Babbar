#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Taking Input

int takingInput(vector<int>& arr, int size){

    cout << "Enter the elements of the array: " << endl;
    int element;

    for (int i = 0; i < size; i++)
    {
        cin >> element;
        arr.push_back(element);
    }

    return 0;
}

// Print the Array

void printArray(vector<int>& arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Find Duplicates

void findDuplicates(vector<int>& arr, int size) {
    sort(arr.begin(), arr.end());

    for(int i = 0; i < size - 1; i++) {
        if(arr[i] == arr[i+1]) {
            cout<<arr[i]<<" ";
            i++;
        }
    }
}

int main(void){

    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    vector<int> arr;
    takingInput(arr, size);

    cout << "Original Array: " << endl;

    printArray(arr, size);

    cout << "Duplicate Elements are: " << endl;

    findDuplicates(arr, size);

}

/*

    OUTPUT:

    Enter the size of the array: 
    7
    Enter the elements of the array:
    1 3 4 2 1 3 7
    Original Array:
    1 3 4 2 1 3 7
    Duplicate Elements are:
    1 3

*/