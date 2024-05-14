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

// Find Pair Sum

vector<vector<int>> pairSum(vector<int>& arr, int s) {

    vector<vector<int>> ans;
    
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; i < arr.size(); i++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
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

    vector<vector<int>> pairs = pairSum(arr, s);

    for (const auto& pair : pairs) {
        cout << pair[0] << " " << pair[1] << endl;
    }


}

/*

    OUTPUT:

    Enter the size of the array: 7
    Enter the elements of the array: 
    1 2 3 4 5 3 1
    Enter the target sum: 7
    Original Array: 1 2 3 4 5 3 1 
    2 5

*/