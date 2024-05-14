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

// find Uniuq Elements 

int findUnique(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans ^= arr[i];
    }

    return ans;
}

int main(void){

    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;

    int arr[100];

    takingInput(arr, size);

    cout << "Original Array: " << endl;

    int answer = findUnique(arr, size);

    cout << "Unique element is! " << answer << endl;

}

/*

    OUTPUT:

    Enter the size of the array:
    5
    Enter the elements of the array: 
    1 2 3 2 1 
    Original Array: 
    Unique element is! 3

*/