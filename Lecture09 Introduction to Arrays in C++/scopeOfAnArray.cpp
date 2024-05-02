#include <iostream>
using namespace std;

void updateArray(int arr[], int size){

    cout << "Inside the function" << endl;

    //Update the first element

    arr[0] = 100;

    //Print the Array

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    cout << "Going back to main function" << endl;
    

}

int main(void){

    int arr[5] = {2, 4, 6, 9, 1};

    updateArray(arr, 5);

    //Print the array

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


}

/*

    OUTPUT:

    Inside the function
    100 4 6 9 1 
    Going back to main function
    100 4 6 9 1 


*/

/*

    NOTE:

    arr[0] is changed in the main function because the array arr is passed to the updateArray function 
    by reference. This means that any changes made to the array within the updateArray function will 
    directly modify the original array passed from main.


*/