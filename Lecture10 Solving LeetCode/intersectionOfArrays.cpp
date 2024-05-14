#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Taking Input
void takingInput(vector<int>& arr1, int n, vector<int>& arr2, int m) {
    cout << "Enter the elements of the first array: " << endl;
    int element;
    for (int i = 0; i < n; i++) {
        cin >> element;
        arr1.push_back(element);
    }

    cout << "Enter the elements of the second array: " << endl;
    for (int i = 0; i < m; i++) {
        cin >> element;
        arr2.push_back(element);
    }
}

// Print the Array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Find Intersection
vector<int> findArrayIntersection(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> ans;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter the size of the first array: ";
    cin >> n;
    cout << "Enter the size of the second array: ";
    cin >> m;

    vector<int> arr1, arr2;
    takingInput(arr1, n, arr2, m);

    cout << "First Array: ";
    printArray(arr1);

    cout << "Second Array: ";
    printArray(arr2);

    cout << "Intersection of the arrays: ";
    vector<int> intersection = findArrayIntersection(arr1, arr2);
    printArray(intersection);

    return 0;
}


/*

    OUTPUT:

    Enter the size of the first array: 4
    Enter the size of the second array: 5
    Enter the elements of the first array: 
    1 3 5 7
    Enter the elements of the second array: 
    1 2 4 6 7
    First Array: 1 3 5 7 
    Second Array: 1 2 4 6 7 
    Intersection of the arrays: 1 7 

*/