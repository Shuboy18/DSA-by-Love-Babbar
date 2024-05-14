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

// Find Triplet Sum
vector<vector<vector<int>>> tripletSum(vector<int>& arr, int s) {
    vector<vector<vector<int>>> ans;
    
    for (int i = 0; i < arr.size() - 2; i++) {
        for (int j = i + 1; j < arr.size() - 1; j++) {
            for (int k = j + 1; k < arr.size(); k++) {
                if (arr[i] + arr[j] + arr[k] == s) {
                    vector<vector<int>> temp;
                    temp.push_back({arr[i], arr[j], arr[k]});
                    ans.push_back(temp);
                } 
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(void){

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr;
    takingInput(arr, size);

    int s;
    cout << "Enter the target sum: ";
    cin >> s;

    cout << "Original Array: ";
    printArray(arr, size);

    vector<vector<vector<int>>> triplets = tripletSum(arr, s);

    for (const auto& triplet : triplets) {
        for (const auto& nums : triplet) {
            for (int num : nums) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
}

/*

    OUTPUT:

    Enter the size of the array: 5
    Enter the elements of the array: 
    1 2 3 4 5
    Enter the target sum: 12
    Original Array: 1 2 3 4 5 
    3 4 5 

*/