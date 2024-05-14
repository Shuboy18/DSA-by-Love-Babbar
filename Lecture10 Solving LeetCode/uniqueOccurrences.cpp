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

// Unique Occurrences

bool uniqueOccurrence(vector<int>& arr){
    sort(arr.begin(), arr.end());
    int count = 1;
    vector<int> occurrenceCounts;

    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i] == arr[i + 1]){
            count++;
        }else{
            occurrenceCounts.push_back(count);
            count = 1;
        }
    }

    occurrenceCounts.push_back(count);

    sort(occurrenceCounts.begin(), occurrenceCounts.end());

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if(occurrenceCounts[i] == occurrenceCounts[i + 1]){
            return false;
        }
    }

    return true;
    
}

int main(void){

    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    vector<int> arr;
    takingInput(arr, size);

    cout << "Original Array: " << endl;

    printArray(arr, size);

    bool answer = uniqueOccurrence(arr);
    if (answer) {
        cout << "The occurrences of each value in the array are unique." << endl;
    } else {
        cout << "The occurrences of some values in the array are not unique." << endl;
    }

}

/*

    OUTPUT:

    Enter the size of the array: 
    7
    Enter the elements of the array: 
    1 2 3 2 1 3 1    
    Original Array: 
    1 2 3 2 1 3 1 
    The occurrences of some values in the array are not unique.

*/