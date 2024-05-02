#include <iostream>
using namespace std;

// Taking Input for array

int takingInput(int number[], int size){

    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }

    return 0;
}

// Find Maximum element of the Array

int getMax(int num[], int n){

    int max = INT32_MIN;  // We stored the maximum lowest number i.e -2147483648

    for (int i = 0; i < n; i++)
    {
        if(num[i] > max){
            max = num[i];
        }
    }

    return max;

    // An Alternate way to do the same thing using predefined function 

    // int maximumNumber = INT32_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     maximumNumber = max(maximumNumber, num[i]);
    
    // }

    // return maximumNumber;

}    

// Find Minimum element of the array

int getMin(int num[], int n){

    int min = INT32_MAX;  // We stored the maximum number i.e 2147483647

    for (int i = 0; i < n; i++)
    {
        if(num[i] < min){
            min = num[i];
        }
    }

    return min;

    // An Alternate way to do the same thing using predefined function 

    // int minimumNumber = INT32_MAX;

    // for (int i = 0; i < n; i++)
    // {
    //     minimumNumber = min(maximumNumber, num[i]);
    
    // }

    // return minimumNumber;
}

int main(void){

    int size;

    cout << "Enter the Size of the Array: " << endl;
    cin >> size;

    //int number[size];   it is a bad practice to assign a variable to an array;

    int number[100];

    takingInput(number, size);

    cout << "Maximum Value of the array is: " << getMax(number, size) << endl;

    cout << "Minimum Value of the array is: " << getMin(number, size) << endl;
}

/*

    OUTPUT:

    Enter the Size of the Array: 
    6
    Enter the elements of the array:
    3 2 5 6 7 2
    Maximum Value of the array is: 7
    Minimum Value of the array is: 2



*/