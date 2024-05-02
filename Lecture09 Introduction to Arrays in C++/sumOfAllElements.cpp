#include <iostream>
using namespace std;

// Taking Input 

int takingInput(int number[], int size){

    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> number[i];
    }

    return 0;
}

// Sum of all the elements of the array

int sumOfAllTheElements(int number[], int size){

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + number[i];
    }

    return sum;
    
}

int main(void){

    int size;

    cout << "Enter the Size of the Array: " << endl;
    cin >> size;

    int number[100];

    takingInput(number, size);

    cout << "Sum of all the elements of the array is: " << sumOfAllTheElements(number, size) << endl;

}

/*

    OUTPUT:

    Enter the Size of the Array: 
    5
    Enter the elements of the array: 
    20 30 10 25 25
    Sum of all the elements of the array is: 110

*/